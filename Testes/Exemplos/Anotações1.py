nomes = []

para = True

while para:
    dec = input("Quer introduzir um nome? ")
    if dec == "S" or dec == "s":
        para = False
        break
nomes.append(input("Introduza um novo nome: "))
print(nomes)

'''nomes = []

while True:
    dec = input("Quer introduzir um nome? ")
    if dec == "S" or dec == "s":
        break
nomes.append(input("Introduza um novo nome: "))
print(nomes)'''

