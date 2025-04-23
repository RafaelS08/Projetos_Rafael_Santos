numero = int(input("Insira um número entre 1 e 100: "))

while numero < 1 or numero > 100:
    numero = int(input("Número inválido! Insira um número entre 1 e 100: "))

print(f"Inseriu o número: {numero}")
