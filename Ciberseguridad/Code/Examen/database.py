import sqlite3
import hashlib

def validate(username, password):
    expected = username.upper()
    if password == expected: return True
    expected = username[::-1]
    if password == expected: return True
    '''Your code va aqui'''
    return False

username = input('Your username: ')
password = input('Your password: ')

if not validate(username, password):
    exit()

conn = sqlite3.connect('example.db')
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
