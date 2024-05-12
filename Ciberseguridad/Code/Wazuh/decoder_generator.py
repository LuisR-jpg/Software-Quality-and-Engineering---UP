import xml.etree.ElementTree as ET

rules = '''
<group name="techstore_inventory">
<rule id="131000" level="3">
<decoded_as>techstore_inventory</decoded_as>
<field name="event">cancel_order</field>
<description>The event indicates that an order with ID $(order_id) was cancelled</description>
</rule>

<rule id="131001" level="7">
<decoded_as>techstore_inventory</decoded_as>
<field name="type">error</field>
<description>Seems like something went wrong</description>
</rule>

<rule id="130002" level="3">
<decoded_as>techstore_inventory</decoded_as>
<field name="event">checkout</field>
<description>User $(username) has made a purchase for a total of $(total)</description>
</rule>

<rule id="130003" level="3">
<decoded_as>techstore_inventory</decoded_as>
<field name="event">add_to_cart</field>
<description>User $(username) has added $(product) to the cart</description>
</rule>

<rule id="130004" level="3">
<decoded_as>techstore_inventory</decoded_as>
<field name="event">checkout</field>
<description>User $(username) has made a purchase for a total of $(total)</description>
</rule>
</group>
'''

decoders = '''
<decoder name="techstore_inventory">
<program_name>techstore_inventory</program_name>
</decoder>
 
<decoder name="log_type">
<parent>techstore_inventory</parent>
<regex>type=(\S+) username=(\S+) event=(\S+)</regex>
<order>type, username, event</order>
</decoder>

<decoder name="log_type">
<parent>techstore_inventory</parent>
<regex>type=(\S+) username=(\S+) event=(\S+) status=(\S+)</regex>
<order>type, username, event, status</order>
</decoder>

<decoder name="log_type">
<parent>techstore_inventory</parent>
<regex>type=(\S+) username=(\S+) event=(\S+) order_id=(\S+)</regex>
<order>type, username, event, order_id</order>
</decoder>
 
<decoder name="log_type">
<parent>techstore_inventory</parent>
<regex>type=(\S+) username=(\S+) event=(\S+) total=(\S+)</regex>
<order>type, username, event, total</order>
</decoder>
 
<decoder name="log_type">
<parent>techstore_inventory</parent>
<regex>type=(\S+) username=(\S+) event=(\S+) product=(\S+) price=(\S+)</regex>
<order>type, username, event, product, price</order>
</decoder>
'''


def setFromXml(xml_string):
    tree = ET.ElementTree(ET.fromstring('<foo>' + xml_string + '</foo>'))
    root = tree.getroot()
    elements = []
    for e in root.iter():
        element = None
        if e.tag == 'regex':
            element = e.text
            elements.append(element)

        if e.tag == 'rule':
            element = {
                'level': e.attrib['level']
            }
            elements.append(element)
        if e.tag == 'field':
            elements[-1]['rule'] = f"{e.attrib['name']}|{e.text}"
        if e.tag == 'description':
            elements[-1]['description'] = e.text
    return elements

with open('logs.log', 'r') as file:
    logs = file.readlines()
logs = [log if log[-1] != '\n' else log[:-1] for log in logs]

e_decoders = setFromXml(decoders)
e_rules = setFromXml(rules)

new_decoders, new_rules = 0, 0
for i, log in enumerate(logs):
    print(f'Log number {i}:', log)
    extra_info = log.split(':')[-1]
    extra_fields = extra_info[1:].split(' ')

    # Build decoder and add it if needed
    decoder = ""
    for field in extra_fields:
        k = field.split('=')[0]
        decoder += f'{k}=(\\S+) '
    decoder = decoder[:-1]
    print(f'\tDecoder is: {decoder}')
    if not decoder in e_decoders:
        e_decoders.append(decoder)
        new_decoders += 1

    # Build rule and add it if needed
    blacklist = ['username', 'product', 'price', 'total']
    for field in extra_fields:
        k, v = field.split('=')
        if k in blacklist: continue
        rule = f'{k}|{v}'
        rules_list = [e['rule'] for e in e_rules]
        if not rule in rules_list:
            description = input(f'\tWrite a description for rule {rule} or n to skip: ')
            if description == 'n': continue
            e_rules.append({
                'level': '5',
                'rule': rule,
                'description': description,
            })
            new_rules += 1

print(f'Added {new_decoders} new decoders')
if new_decoders:
    decoders_file = '<decoder name="techstore_inventory">\n\t<program_name>techstore_inventory</program_name>\n</decoder>'
    for d in e_decoders:
        order = "".join(d.split("=(\\S+)"))
        decoders_file += f'\n<decoder name = "log_type">'
        decoders_file += f'\n\t<parent>techstore_inventory</parent>'
        decoders_file += f'\n\t<regex>{d}</regex>'
        decoders_file += f'\n\t<order>{order}</order>'
        decoders_file += f'\n</decoder>'
    print(decoders_file)

print(f'Added {new_rules} new rules')
if new_rules:
    rules_file = '<group name="techstore_inventory">'
    id = 131000
    for r in e_rules:
        k, v = r['rule'].split('|')
        rules_file += f'\n\t<rule id = {id} level = {r["level"]}>'
        rules_file += f'\n\t\t<decoded_as>techstore_inventory</decoded_as>'
        rules_file += f'\n\t\t<field name="{k}">{v}</field>'
        rules_file += f'\n\t\t<description>{r["description"]}</description>'
        rules_file += f'\n\t</rule>'
        id += 1
    rules_file += '\n</group>'
    print(rules_file)
