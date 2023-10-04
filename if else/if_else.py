while True:
    print("Selecciona una operacion matematica:")
    print("1. Suma")
    print("2. Resta")
    print("3. Multiplicacion")
    print("4. Division")
    opcion = int(input("Ingresa el numero de la opcion: "))

    if opcion == 1:
        numero1 = float(input("Ingresa el primer numero: "))
        numero2 = float(input("Ingresa el segundo numero: "))
        resultado = numero1 + numero2
        print(f"El resultado de la suma es: {resultado}")
    elif opcion == 2:
        numero1 = float(input("Ingresa el primer numero: "))
        numero2 = float(input("Ingresa el segundo numero: "))
        resultado = numero1 - numero2
        print(f"El resultado de la resta es: {resultado}")
    elif opcion == 3:
        numero1 = float(input("Ingresa el primer numero: "))
        numero2 = float(input("Ingresa el segundo numero: "))
        resultado = numero1 * numero2
        print(f"El resultado de la multiplicacion es: {resultado}")
    elif opcion == 4:
        numero1 = float(input("Ingresa el primer numero: "))
        numero2 = float(input("Ingresa el segundo numero (distinto de 0): "))
        if numero2 != 0:
            resultado = numero1 / numero2
            print(f"El resultado de la division es: {resultado}")
        else:
            print("Error: No puedes dividir entre cero.")
    else:
        print("Opcion no valida.")

    continuar = input("¿Deseas hacer otra operacion? (s/n): ").lower()
    if continuar != 's':
        break
