print("Tabla de verdad para la compuerta AND:")
print("A   | B   | A AND B")
print("----|-----|-------")
for a in [False, True]:
    for b in [False, True]:
        print(f"{a}   | {b}   | {a and b}")

print("\nTabla de verdad para la compuerta OR:")
print("A   | B   | A OR B")
print("----|-----|------")
for a in [False, True]:
    for b in [False, True]:
        print(f"{a}   | {b}   | {a or b}")

print("\nTabla de verdad para la negación de la compuerta AND:")
print("A   | B   | NOT (A AND B)")
print("----|-----|-------------")
for a in [False, True]:
    for b in [False, True]:
        print(f"{a}   | {b}   | {not (a and b)}")

print("\nTabla de verdad para la negación de la compuerta OR:")
print("A   | B   | NOT (A OR B)")
print("----|-----|------------")
for a in [False, True]:
    for b in [False, True]:
        print(f"{a}   | {b}   | {not (a or b)}")
