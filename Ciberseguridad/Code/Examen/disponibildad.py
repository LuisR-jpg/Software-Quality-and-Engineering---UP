'''
Escribe una aplicación que pongas que tipo de redundancia tienes, el valor de disponibilidad de cada sistema y te
calcule la disponibilidad total (En % y en días, horas y minutos) y la NO disponibilidad (En % y en días, horas y
minutos)
'''

sistema = {
    'ISP': 0.99,
    'VM': 0.98,
    'Website': 0.999
}
sistema = {
    'ISP': [0.98, 0.97],
    'Website': 0.99
}

def calcular(sistema):
    disponibilidad = 1
    for i in sistema:
        if(type(sistema[i]) == list):
            if len(sistema[i]) > 2: return 'No'
            s = sum(sistema[i])
            m = 1
            for j in sistema[i]:
                m *= j
            dip = s - m
            disponibilidad *= dip
        else:
            disponibilidad *= sistema[i]
    return disponibilidad * 100


disp = calcular(sistema)
print(f'Disponibilidad %: {disp}%')
print(f'No disponibilidad %: {100 - disp}%')
disp /= 100
dias = disp * 365.25
print(f'Dias {dias}')
print(f'No dias {365.25 - dias}')
horas = dias * 24
print(f'Horas {horas}')
print(f'No horas {365.25 * 24 - horas}')
minutos = horas * 60
print(f'Minutos {minutos}')
print(f'No minutos {365.25 * 24 * 60 - minutos}')