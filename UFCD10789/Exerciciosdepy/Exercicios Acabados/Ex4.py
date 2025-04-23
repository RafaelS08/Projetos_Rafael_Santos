numero = int(input("Insira um número inteiro: "))

if numero < 2:
    print("Não é primo")
else:
    divisor = 2
    primo = True

    while divisor < numero:
        if numero % divisor == 0:
            primo = False
            break
        divisor += 1

    if primo:
        print("É primo")
    else:
        print("Não é primo")
