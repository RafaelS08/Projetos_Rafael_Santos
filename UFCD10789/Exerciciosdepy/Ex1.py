'''noms=[]
for nom in noms:
    print(nom)
    
Criar Menu com 3 opções
1- Introduza nomes
2- Listar nomes na lista
3- parar programa'''

'''nomes = []

while True:
    dec = input("Quer introduzir um nome? ")
    if dec == "S" or dec == "s":
        break
nomes.append(input("Introduza um novo nome: "))
print(nomes)'''

'''nomes = []

para = True

while para:
    dec = input("Quer introduzir um nome? ")
    if dec == "S" or dec == "s":
        para = False
        break
nomes.append(input("Introduza um novo nome: "))
print(nomes)'''

nomes=[]
para = True
para2 = True

while para:
    print("\nEscolha uma opção:")
    print("Opção 1- Introduzir nome/s")
    print("Opção 2- Listar nome/s")
    print("Opção 3- Parar programa")
        
    opc = input("\nOpção a escolher: ")
    
    if opc == "1":
        nomes.append(input("\nIntroduza um nome: "))
    
    elif opc == "2":
        print("\nNomes: ", nomes)
        
    elif opc == "3":
        para = False
    
    else:
        print("Opção Inválida, escolha de novo")
        
print("Fim")