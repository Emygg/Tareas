#Definir las variables 
A = 1
B = 10
C = 20
D = C + B
#mostrando variables
print("Esto es A:", A)
#Probando una forma para mostrar las variables 
print(f"D equivale a: {D}")
#Otra forma de mostrar variables 
print("mostrando D:", D)

F = D + B

print(F"F equivale a: {F}")
print("mostrando F:", F)

#Cambiando la variable 
A = 30 

print("Ahora A equivale a:", A)

#elevando una variable a una potencia "X"
A = 4
potencia = float(input("A que potencia quieres elevar A? "))

resultado = pow(A, potencia) 

#mostrando el resultado de la potencia 
print(f"A elevado a la potencia {potencia} es:", resultado)

#jugando con las variables
E = resultado * B

print("Mostrando E:",  E)

H = E / C

print("Mostrando H", H)

#convirtiendo los resultados a enteros
H = int(H)

print("Mostrando H:", H)