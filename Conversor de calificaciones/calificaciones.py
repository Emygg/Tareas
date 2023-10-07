while True:
    calificacion = int(input("¿Cuál es tu calificación? "))

    if 97 <= calificacion <= 100:
        Cal_convertida = "A+, felicidades"
    elif 93 <= calificacion <= 96:
        Cal_convertida = "A, hiciste un gran trabajo"
    elif 90 <= calificacion <= 92:
        Cal_convertida = "A-, muy bien"
    elif 87 <= calificacion <= 89:
        Cal_convertida = "B+, bien hecho"
    elif 83 <= calificacion <= 86:
        Cal_convertida = "B, lo hiciste bien"
    elif 80 <= calificacion <= 82:
        Cal_convertida = "B-, no está tan mal"
    elif 77 <= calificacion <= 79:
        Cal_convertida = "C+, pudiste hacerlo mejor"
    elif 73 <= calificacion <= 76:
        Cal_convertida = "C, esfuérzate más"
    elif 70 <= calificacion <= 72:
        Cal_convertida = "C-, puedes hacerlo mucho mejor"
    elif 67 <= calificacion <= 69:
        Cal_convertida = "D+, estás cerca de reprobar"
    elif 65 <= calificacion <= 66:
        Cal_convertida = "D, puedes dar más de ti"
    elif 0 <= calificacion <= 64:
        Cal_convertida = "D-, muy mal"
    else:
        print("No pusiste bien tu calificación, vuelve a intentarlo")
        continue

    print("Tu calificación es:", Cal_convertida)

    intento = input("¿Quieres ingresar otra calificación? (s/n) ").lower()
    if intento != 's':
        break