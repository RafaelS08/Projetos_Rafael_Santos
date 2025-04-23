numero = int(input("Insira um número: "))
operacoes = 0

for i in range(1, numero):
    soma = numero + i
    subtracao = numero - i
    multiplicacao = numero * i
    divisao = numero / i if i != 0 else "Indefinido"

    print(f"{numero} + {i} = {soma}")
    print(f"{numero} - {i} = {subtracao}")
    print(f"{numero} * {i} = {multiplicacao}")
    print(f"{numero} / {i} = {divisao}")

    operacoes += 4

print(f"\nTotal de operações realizadas: {operacoes}")
