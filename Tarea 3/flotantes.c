#include <stdio.h>

int main() {
    float a, b, c, d, numero1, numero2, numero3;
    a = 13.56;
    b = 16.34;
    c = 35.34;
    d = a + b * c;

    printf("Esto es a: %.2f\n", a);
    printf("Esto es b: %.2f\n", b); // Corregido
    printf("Esto es c: %.2f\n", c); // Corregido
    printf("Esto es d: %.2f\n", d); // Corregido

    // Cambiar el valor de las variables

    printf("Dime un numero ");
    scanf("%f", &numero1); // Corregido
    printf("Elegiste el numero %.2f\n", numero1); // Corregido

    printf("Dime un numero ");
    scanf("%f", &numero2); // Corregido
    printf("Elegiste el numero %.2f\n", numero2); // Corregido

    printf("Dime un numero ");
    scanf("%f", &numero3); // Corregido
    printf("Elegiste el numero %.2f\n", numero3); // Corregido

    return 0;
}
