num1 = int(input("Insera o primeiro numero: "))
num2 = int(input("Insira o segundo numero: "))
num3 = int(input("Insira o terceiro numero: "))


#Nº1
if num1>num2 & num2>num3:
    print(f"{num1} ser maior, {num2} ser meio, {num3} ser menor")

#Nº2
elif num1>num3 & num3>num2:
    print(f"{num1} ser maior, {num3} ser meio, {num2} ser menor")

#Nº3
elif num3>num2 & num2>num1:
    print(f"{num3} ser maior, {num2} ser meio, {num1} ser menor")

#Nº4
elif num3>num1 & num1>num2:
    print(f"{num3} ser maior, {num1} ser meio, {num2} ser menor")

#Nº5
elif num2>num1 & num1>num3:
    print(f"{num2} ser maior, {num1} ser meio, {num3} ser menor")

#Nº6
elif num2>num3 & num3>num1:
    print(f"{num2} ser maior, {num3} ser meio, {num1} ser menor")

