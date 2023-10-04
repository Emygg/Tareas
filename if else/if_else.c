#include <stdio.h>

int main() {
    int opcion;
    double resultado, numero1, numero2;
    char continuar;

    do {
        printf("Selecciona una operacion matematica:\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicacion\n");
        printf("4. Division\n");
        printf("Ingresa el numero de la opcion: ");
        scanf("%d", &opcion);

        if (opcion == 1) {
            printf("Ingresa el primer numero: ");
            scanf("%lf", &numero1);
            printf("Ingresa el segundo numero: ");
            scanf("%lf", &numero2);
            resultado = numero1 + numero2;
            printf("El resultado de la suma es: %.2lf\n", resultado);
        } else if (opcion == 2) {
            printf("Ingresa el primer numero: ");
            scanf("%lf", &numero1);
            printf("Ingresa el segundo numero: ");
            scanf("%lf", &numero2);
            resultado = numero1 - numero2;
            printf("El resultado de la resta es: %.2lf\n", resultado);
        } else if (opcion == 3) {
            printf("Ingresa el primer numero: ");
            scanf("%lf", &numero1);
            printf("Ingresa el segundo numero: ");
            scanf("%lf", &numero2);
            resultado = numero1 * numero2;
            printf("El resultado de la multiplicacion es: %.2lf\n", resultado);
        } else if (opcion == 4) {
            printf("Ingresa el primer numero: ");
            scanf("%lf", &numero1);
            printf("Ingresa el segundo numero (distinto de 0): ");
            scanf("%lf", &numero2);
            if (numero2 != 0) {
                resultado = numero1 / numero2;
                printf("El resultado de la division es: %.2lf\n", resultado);
            } else {
                printf("Error: No puedes dividir entre cero.\n");
            }
        } else {
            printf("Opcion no valida.\n");
        }

        printf("¿Deseas hacer otra operacion? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    return 0;
}


