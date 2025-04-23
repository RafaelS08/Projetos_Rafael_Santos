numeros_pares = []
contador = 0

while contador < 30:
    numero = int(input("Insira um número par entre 1 e 50 (Tem que Inserir até 30 números): "))
    
    if 1 <= numero <= 50 and numero % 2 == 0:
        numeros_pares.append(numero)
        contador += 1

media = sum(numeros_pares) / 30
print(f"A média é: {media}")
