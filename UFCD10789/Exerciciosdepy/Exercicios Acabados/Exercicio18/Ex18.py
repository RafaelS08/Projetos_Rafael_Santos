numero = int(input("Digite um número: "))
contador = 0

for n in range(1, numero + 1):
    if sum([i for i in range(1, n) if n % i == 0]) == n:
        contador += 1
        print(n)

print(contador)
