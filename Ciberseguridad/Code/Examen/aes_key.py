from cryptography.hazmat.primitives import hashes
from cryptography.hazmat.primitives.kdf.pbkdf2 import PBKDF2HMAC
from cryptography.hazmat.primitives.ciphers import Cipher, algorithms, modes
from cryptography.hazmat.backends import default_backend
import os
import base64

# Solicitar un texto para generar la clave AES
texto_clave = input("Introduce un texto para generar la clave AES: ")

# Generar una sal (salt)
salt = os.urandom(16)

# Derivar una clave AES usando PBKDF2-HMAC-SHA256
kdf = PBKDF2HMAC(
    algorithm=hashes.SHA256(),
    length=32,
    salt=salt,
    iterations=100000,
    backend=default_backend()
)

# Derivar la clave del texto proporcionado
clave = kdf.derive(texto_clave.encode())

# Guardar la clave y la sal en un archivo Clave.txt
clave_base64 = base64.b64encode(clave).decode('utf-8')
salt_base64 = base64.b64encode(salt).decode('utf-8')

with open('Clave.txt', 'w') as clave_file:
    clave_file.write(f'{salt_base64}:{clave_base64}')

print("Clave AES generada y guardada en Clave.txt")

# Solicitar el texto a cifrar
texto_a_cifrar = input("Introduce el texto a cifrar: ").encode()

# Generar un IV (vector de inicialización) aleatorio
iv = os.urandom(16)

# Crear un cifrador AES en modo CBC
cipher = Cipher(algorithms.AES(clave), modes.CBC(iv), backend=default_backend())
encryptor = cipher.encryptor()

# Rellenar el texto a cifrar para que sea múltiplo del tamaño del bloque
from cryptography.hazmat.primitives import padding
padder = padding.PKCS7(algorithms.AES.block_size).padder()
texto_rellenado = padder.update(texto_a_cifrar) + padder.finalize()

# Cifrar el texto
texto_cifrado = encryptor.update(texto_rellenado) + encryptor.finalize()

# Codificar el texto cifrado y el IV en Base64 para almacenarlos o transmitirlos
iv_base64 = base64.b64encode(iv).decode('utf-8')
texto_cifrado_base64 = base64.b64encode(texto_cifrado).decode('utf-8')

print(f"IV (Base64): {iv_base64}")
print(f"Texto cifrado (Base64): {texto_cifrado_base64}")

# Desencriptar el texto cifrado
# Decodificar el IV y el texto cifrado de Base64
iv = base64.b64decode(iv_base64)
texto_cifrado = base64.b64decode(texto_cifrado_base64)

# Crear un descifrador AES en modo CBC
decryptor = cipher.decryptor()

# Desencriptar el texto
texto_descifrado_rellenado = decryptor.update(texto_cifrado) + decryptor.finalize()

# Eliminar el relleno del texto descifrado
unpadder = padding.PKCS7(algorithms.AES.block_size).unpadder()
texto_descifrado = unpadder.update(texto_descifrado_rellenado) + unpadder.finalize()

print(f"Texto descifrado: {texto_descifrado.decode('utf-8')}")
