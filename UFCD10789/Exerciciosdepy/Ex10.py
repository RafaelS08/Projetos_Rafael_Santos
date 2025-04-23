numero = int(input("Insira um número para que sejam mostrados todos os divisores do mesmo: "))
divisores = 0

for i in range(1, numero + 1):
    if numero % i == 0:
        divisores += 1

print(f"O número {numero} possui {divisores} divisores.")