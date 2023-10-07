while True:
    print("Selecciona una operación matemática:")
    print("1. Suma")
    print("2. Resta")
    print("3. Multiplicación")
    print("4. División")
    opcion = int(input("Ingresa el número de la opción: "))

    if opcion in [1, 2, 3, 4]:
        numero1 = float(input("Ingresa el primer número: "))
        numero2 = float(input("Ingresa el segundo número: "))

        if opcion == 1:
            resultado = numero1 + numero2
            print(f"El resultado de la suma es: {resultado:.2f}")
        elif opcion == 2:
            resultado = numero1 - numero2
            print(f"El resultado de la resta es: {resultado:.2f}")
        elif opcion == 3:
            resultado = numero1 * numero2
            print(f"El resultado de la multiplicación es: {resultado:.2f}")
        elif opcion == 4:
            if numero2 != 0:
                resultado = numero1 / numero2
                print(f"El resultado de la división es: {resultado:.2f}")
            else:
                print("Error: No puedes dividir entre cero.")
    else:
        print("Opción no válida.")

    continuar = input("¿Deseas hacer otra operación? (s/n): ").strip().lower()
    if continuar != 's':
        break
