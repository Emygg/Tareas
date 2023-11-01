
def suma(numero1, numero2):
    resultado = numero1 + numero2
    return resultado

def resta(numero1, numero2):
    resultado = numero1 - numero2
    return resultado

def multiplicacion(numero1, numero2):
    resultado = numero1 * numero2
    return resultado

def division(numero1, numero2):
    if numero2 != 0:
        resultado = numero1 / numero2
        return resultado
    else:
        print("No puedes dividir entre cero.")

def potencia(base, exponente):
    resultado = 1

    for i in range(exponente):
        resultado *= base
    
    return resultado

def Raiz(numero, raiz):
    if raiz == 0:
        return "No se puede calcular la raíz de grado 0."

    resultado = numero**(1/raiz)

    if resultado.is_integer():
        return int(resultado)
    else:
        return "El número no tiene una raíz exacta."



while True:
    print("¿Qué operacion quieres hacer?")
    print("1. Suma")
    print("2. Resta")
    print("3. Multiplicación")
    print("4. División")
    print("5. Potencia")
    print("6. Raiz")
    operación = int(input("Ingresa el numero de la operación: "))
  
    if operación == 1:
        numero1 = input("dime un numero ")
        numero2 = input("dime otro numero ")
        numero1 = float(numero1)
        numero2 = float(numero2)
        resultado = suma(numero1=numero1, numero2=numero2)
        print(resultado)
    elif operación == 2:
        numero1 = input("dime un numero ")
        numero2 = input("dime otro numero ")
        numero1 = float(numero1)
        numero2 = float(numero2)
        resultado = resta(numero1=numero1, numero2=numero2)
        print(resultado)
    elif operación == 3:
        numero1 = input("dime un numero ")
        numero2 = input("dime otro numero ")
        numero1 = float(numero1)
        numero2 = float(numero2)
        resultado = multiplicacion(numero1=numero1, numero2=numero2)
        print(resultado)
    elif operación == 4:
        numero1 = input("dime un numero ")
        numero2 = input("dime otro numero ")
        numero1 = float(numero1)
        numero2 = float(numero2)
        resultado = division(numero1=numero1, numero2=numero2)
        print(resultado)
    elif operación == 5:
        base = input("dime el numero que quieres elevar: ")
        base = float(base)
        exponente = input("dime el exponente: ")
        exponente = int(exponente)
        resultado = potencia(base=base, exponente=exponente)
        print(resultado)
    elif operación == 6:
        numero = input("Dime el numero al que le quieres sacar raiz: ")
        numero = int(numero)
        raiz = input("Dime de que grado quieres que sea la raiz: ")
        raiz = int(raiz)
        resultado = Raiz(numero=numero, raiz=raiz)
        print(resultado)
    else:
        print("Opción no válida.")

    continuar = input("¿Deseas hacer otra operación? (s/n): ").strip().lower()
    if continuar != 's':
        break
