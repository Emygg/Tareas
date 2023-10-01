import time

Nombre = input("Bienvenido, para registrarse escriba su nombre: ")
pin = int(input("Ahora cree un pin de seguridad: "))

print("Sus datos han sido guardados correctamente, se los mostraremos a continuación:")
time.sleep(2)
print("Su nombre es", Nombre)
time.sleep(2)
print("Su pin es", pin)

intentos = 5
dinero_gua = 16543.64

while intentos > 0:
    time.sleep(5)
    print("Ahora inicie sesión para tener acceso a la app")
    time.sleep(2)
    nombre_usuario = input("Ingrese su nombre: ")
    time.sleep(1)
    pin_usuario = int(input("Escribe tu pin: "))

    if nombre_usuario == Nombre and pin_usuario == pin:
        print("Bienvenido de nuevo, el saldo en su cuenta es de", dinero_gua)

        respuesta = input("¿Quiere ingresar dinero? (S/N): ")
        if respuesta.lower() == "s":
            dinero_in = float(input("¿Cuánto dinero quiere ingresar? "))
            dinero_total = dinero_gua + dinero_in
            print("Listo, su dinero total ahora es de", dinero_total)
        else:
            print("Gracias por su visita, vuelva pronto")
            break
    else:
        print("Datos incorrectos, vuelva a intentarlo")
        intentos -= 1