#include <stdio.h>

int main() {
    int opcion;
    double resultado, numero1, numero2;
    char continuar;

    do { //Aqui se establecen los casos posibles en este caso con operaciones matematicas 
        printf("Selecciona una operacion matematica:\n");
        printf("1. Suma\n");
        printf("2. Resta\n");
        printf("3. Multiplicacion\n");
        printf("4. Division\n");
        printf("Ingresa el numero de la opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {  //Aqui empieza a comparar los casos posibles con la opcion elegida
            case 1:
                printf("Ingresa el primer numero: ");
                scanf("%lf", &numero1);
                printf("Ingresa el segundo numero: ");
                scanf("%lf", &numero2);
                resultado = numero1 + numero2;
                printf("El resultado de la suma es: %.2lf\n", resultado);
                break;
            case 2:
                printf("Ingresa el primer numero: ");
                scanf("%lf", &numero1);
                printf("Ingresa el segundo numero: ");
                scanf("%lf", &numero2);
                resultado = numero1 - numero2;
                printf("El resultado de la resta es: %.2lf\n", resultado);
                break;
            case 3:
                printf("Ingresa el primer numero: ");
                scanf("%lf", &numero1);
                printf("Ingresa el segundo numero: ");
                scanf("%lf", &numero2);
                resultado = numero1 * numero2;
                printf("El resultado de la multiplicacion es: %.2lf\n", resultado);
                break;
            case 4:
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
                break;
            default:
                printf("Opcion no valida.\n");
                break;
        }

        printf("¿Deseas hacer otra operacion? (s/n): "); //Al acabar la operacion deseada pregunta si quieres volver a hacer otra operacion
        scanf(" %c", &continuar);  

    } while (continuar == 's' || continuar == 'S');

    return 0;
}

