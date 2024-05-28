import sqlite3
import hashlib

databaseName = 'Aprende'

def validate(username, password):
    message = f'{username.lower()} {databaseName.lower()} autorizado' 
    hasher = hashlib.md5()
    hasher.update(message.encode())
    expected = hasher.hexdigest()
    return expected == password

username = input('Your username: ')
password = input('Your password: ')

if not validate(username, password):
    print("You don't have access to my db")
    exit()


print('You have access to the database!')
conn = sqlite3.connect(f'{databaseName}.db')
cur = conn.cursor()
cur.execute('''
    CREATE TABLE IF NOT EXISTS users (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        name TEXT,
        age INTEGER
    )
''')
conn.commit()
cur.execute('''
    INSERT INTO users (name, age) VALUES (?, ?)
''', ('Alice', 30))
cur.execute('''
    INSERT INTO users (name, age) VALUES (?, ?)
''', ('Bob', 25))
conn.commit()
cur.execute('SELECT * FROM users')
users = cur.fetchall()
for user in users:
    print(user)
conn.close()
