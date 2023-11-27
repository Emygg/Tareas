import time
import os

UsuarioP = "Emy"
ContraseñaUP = "1234"
Empleados = []
Prendas = []
Dinero = 100000

def iniciar_sesion(UsuarioP, ContraseñaUP): 
    
    for k in range(5):
        Usuario_in = input("Ingresa el nombre de usuario: ")
        contraseña_in = input("Ingresa la contraseña: ")
        for i in range(3):
            print("Verificando...")
            time.sleep(.5)

        if Usuario_in == UsuarioP and contraseña_in == ContraseñaUP:
            print("Datos correctos, iniciando sistema")
            time.sleep(.5)
            for b in range(0, 100, 7):
                print(f"cargando {b}%")
                time.sleep(.3)
                os.system('cls')
            print("Inicio de sistema completado")
            return True
        else:
            print("Datos incorrectos, vuelve a intentarlo")
            os.system('cls')
    print("Intentos agotados... Reiniciando sistema")
    time.sleep(.5)
    print("bye bye")
    return False

def validar_letras(texto):
    while True:
        valor = input(texto).strip().capitalize()
        if valor.isalpha():
            return valor
        else:
            print("Por favor, ingresa solo letras.")

def validar_numeros(texto):
    while True:
        valor = input(texto).strip()
        if valor.isdigit():
            return valor
        else:
            print("Por favor, ingresa solo números.")

def menu():
    print("1.- Agregar empleado")
    print("2.- Eliminar empleado")
    print("3.- Agregar prenda")
    print("4.- Eliminar prenda")
    print("5.- Buscar empleado")
    print("6.- Buscar prenda")
    print("7.- Dinero")
    print("8.- Retirar dinero")
    print("9.- Salir")
    opción = int(input("Elige una opción: "))
    return opción

def Agregar_empleado(Empleados):
    nombre = input("Escribe el nombre: ")
    apellido1 = input("Escribe su primer apellido: ")
    apellido2 = input("Escribe su sengundo apellido: ")
    edad = input("Escribe su edad: ")
    rango = input("Escribe su rango: ")
    sueldo = input("Escribe su sueldo: ")
    Empleados.append([nombre, apellido1, apellido2, edad, rango, sueldo])

def Eliminar_empleado(Empleados):
    nombre = input("Nombre: ")
    for Empleado in Empleados:
        if Empleado[0] == nombre:
            Empleados.reEmpleadoove(Empleado)
            break
    else:
        print("No se encontró a la persona")

def Agregar_prenda(Prendas):
     Tipo_prenda = input("Escribe el tipo de prenda: ")
     Color= input("Escribe el color: ")
     Tallas = input("Escribe sus tallas: ")
     Codigo = input("Escribe su codigo de identificación: ")
     Prendas.append([Tipo_prenda, Color, Tallas, Codigo])

def Eliminar_prenda(Prendas):
    Tipo_prenda = input("Nombre: ")
    for Prenda in Prendas:
        if Prendas[3] == Tipo_prenda:
            Prendas.reEmpleadoove(Tipo_prenda)
            break
    else:
        print("No se encontró la prenda")

def Buscar_empleado(Empleados):
    nombre = input("Nombre: ")
    print("Buscando persona...")
    time.sleep(.3)
    os.system("cls")
    print("Empleado encontrado, mostrando datos")
    time.sleep(.7)
    os.system("cls")
    for Empleado in Empleados:
        if Empleado[0] == nombre:
            print("Nombre: ", Empleado[0])
            print("Apellido Parteno: ", Empleado[1])
            print("Apellido Materno: ", Empleado[2])
            print("Eddad: ", Empleado[3])
            print("Rango: ", Empleado[4])
            print("Sueldo: ", Empleado[5])
            print("***************************")
            break
    else:
        print("No se encontró a la persona, vuelve a intentarlo")

def Buscar_prenda(Prendas):
    Codigo_prenda = input("Codigo: ")
    print("Buscando prenda...")
    time.sleep(.3)
    os.system("cls")
    print("Prenda encontrada, mostrando datos")
    time.sleep(.7)
    os.system("cls")
    for Prenda in Prendas:
        if Prenda[3] == Codigo_prenda:
            print("Tipo de prenda: ", Prenda[0])
            print("Color: ", Prenda[1])
            print("Tallas: ", Prenda[2])
            print("***************************")
            break
        else:
            print("No se encontró la prenda")
            os.system("cls")

def Ingresos(Dinero, Empleados):
    print("1.- Ver ingresos")
    print("2.- Pagar a empleado")
    print("3.- Ingresar monto")
    numero = int(input("¿Qué operación deseas hacer?"))
    if numero == 1:
        print("La cantidad de dinero que tiene la tienda es de: ", Dinero)

    elif numero == 2:
        int(Dinero)
        Empleado_pagado = input("¿A qué empleado se le va a pagar?")
        print("Buscando persona...")
        time.sleep(.3)
        os.system("cls")
        for Empleado in Empleados:
            if Empleado[0] == Empleado_pagado:
                Pago = int(Empleado[5])
                if Pago <= Dinero:
                    continuar = input(f"Al empleado se le pagara la cantidad de {Pago}, ¿Quiere continuar?").strip().lower()
                    if continuar != 's':
                        break
                    else:
                        Dinero -= Pago
                        print("El pago ha sido exitoso, confirme con el empleado el depósito de su sueldo")
                        input("")
                        os.system("cls")
                        return Dinero
                else:
                    print("El sueldo del empleado supera los ingresos de la tienda, cambie el sueldo antes de pagarle")
                    os.system("cls")
                    break
            else:
                print("El empleado no se ha encontrado, intente de nuevo")
                os.system("cls")
    elif numero == 3:
        monto_ingresar = float(input("Ingrese el monto que desea ingresar: $"))
        Dinero += monto_ingresar
        print(f"Se ha ingresado correctamente ${monto_ingresar}.")
        print(f"El dinero total en la tienda es ahora de: ${Dinero}")
        os.system("cls")
        return Dinero

    else:
        print("Opción no válida")
    return Dinero

def Retirar_dinero(Dinero):
    validacion = iniciar_sesion(UsuarioP, ContraseñaUP)
    if validacion:
        print("\n--- Retirar Dinero ---")
        cantidad_retirar = float(input("Ingrese la cantidad de dinero que desea retirar: $"))
        
        # Verificar si hay suficiente dinero para retirar
        if cantidad_retirar <= Dinero:
            Dinero -= cantidad_retirar
            print(f"Se ha retirado correctamente ${cantidad_retirar}.")
            print(f"El dinero restante en la tienda es de: ${Dinero}")
            return Dinero
        else:
            print("No hay suficiente dinero en la tienda para retirar esa cantidad.")
            return Dinero
    else:
        print("Iniciar sesión fallida. No se puede realizar el retiro de dinero.")
        return Dinero


validación = iniciar_sesion(UsuarioP, ContraseñaUP)
if validación == True:
    while True:
        opción = menu()
        if opción == 1:
            Agregar_empleado(Empleados)
            input("")
            os.system("cls")

        elif opción == 2:
            Eliminar_empleado(Empleados)
            input("")
            os.system("cls")

        elif opción == 3:
            Agregar_prenda(Prendas)
            input("")
            os.system("cls")

        elif opción == 4:
            Eliminar_prenda(Prendas)
            input("")
            os.system("cls")

        elif opción == 5:
            Buscar_empleado(Empleados)
            input("")
            os.system("cls")

        elif opción == 6:
            Buscar_prenda(Prendas)
            input("")
            os.system("cls")
        
        elif opción == 7:
            Dinero = Ingresos(Dinero, Empleados)
            input("")
            os.system("cls")

        elif opción == 8:
            Dinero = Retirar_dinero(Dinero)
            input("")
            os.system("cls")

        elif opción == 9:
            print("Adios")
            input("")
            os.system("cls")
            break

        else:
            print("opción no valida")
