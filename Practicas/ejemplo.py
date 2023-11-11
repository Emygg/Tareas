import time
import os

def convertir_a_mayusculas(texto):
    texto_en_mayusculas = ""
    for caracter in texto:
        if 'a' <= caracter <= 'z' or caracter in "áéíóúäëïöüñ":
            # Convierte letras minúsculas y caracteres especiales a mayúsculas
            valor_ascii = ord(caracter)
            if 'a' <= caracter <= 'z':
                valor_ascii -= 32  # Diferencia entre 'a' (97) y 'A' (65)
            elif caracter in "áéíóúäëïöüñ":
                # Diferencia entre minúsculas y mayúsculas en la tabla ASCII
                valor_ascii -= ord('a') - ord('A')
            caracter = chr(valor_ascii)
        texto_en_mayusculas += caracter
    return texto_en_mayusculas

def convertir_a_minusculas(texto):
    texto_en_minusculas = ""
    for caracter in texto:
        if 'A' <= caracter <= 'Z' or caracter in "ÁÉÍÓÚÄËÏÖÜÑ":

            valor_ascii = ord(caracter)
            if 'A' <= caracter <= 'Z':
                valor_ascii += 32
            elif caracter in "ÁÉÍÓÚÄËÏÖÜÑ":

                valor_ascii += ord('a') - ord('A')
            caracter = chr(valor_ascii)
        texto_en_minusculas += caracter
    return texto_en_minusculas


while True:
    os.system('cls')
    print("Hola ¿Qué quieres hacer? ")
    print("1.- Convertir a mayusculas")
    print("2.- Convertir a minusculas")
    print("3.- Salir")
    operación = int(input("Ingresa el numero de la operación: "))

    if operación == 1:
        texto_original = input("escribe cualquier cosa: ")
        texto_en_mayusculas = convertir_a_mayusculas(texto_original)
        print("convirtiendo texto...")
        time.sleep(.3)
        print("convirtiendo texto...")
        time.sleep(.3)
        print("convirtiendo texto...")
        time.sleep(.3)
        print(texto_en_mayusculas)
        input("Presiona Enter para continuar...")

    elif operación == 2:
        texto_original = input("escribe cualquier cosa: ")
        texto_en_minusculas = convertir_a_minusculas(texto_original)
        print("convirtiendo texto...")
        time.sleep(.3)
        print("convirtiendo texto...")
        time.sleep(.3)
        print("convirtiendo texto...")
        time.sleep(.3)
        print(texto_en_minusculas)
        input("Presiona Enter para continuar...")

    elif operación == 3:
        print("Saliendo...")
        time.sleep(.5)
        print("Adios")
        time.sleep(.3)
        os.system('cls')
        break
