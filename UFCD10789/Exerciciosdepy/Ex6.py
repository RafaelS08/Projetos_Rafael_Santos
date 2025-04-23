numero = 2
contagem_primos = 0

while contagem_primos < 10:
    divisor = 1
    divisores = 0
    
    while divisor <= numero:
        if numero % divisor == 0:
            divisores += 1
        divisor += 1
    
    if divisores == 2:
        print(numero)
        contagem_primos += 1
    
    numero += 1
