#include <stdio.h>

int main() {
    int a, b;
    printf("Tabla de verdad para la compuerta AND:\n");
    printf("A   | B   | A AND B\n");
    printf("----|-----|-------\n");
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            printf("%d   | %d   | %d\n", a, b, a && b);
        }
    }

    printf("\nTabla de verdad para la compuerta OR:\n");
    printf("A   | B   | A OR B\n");
    printf("----|-----|------\n");
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            printf("%d   | %d   | %d\n", a, b, a || b);
        }
    }

    printf("\nTabla de verdad para la negación de la compuerta AND:\n");
    printf("A   | B   | NOT (A AND B)\n");
    printf("----|-----|-------------\n");
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            printf("%d   | %d   | %d\n", a, b, !(a && b));
        }
    }

    printf("\nTabla de verdad para la negación de la compuerta OR:\n");
    printf("A   | B   | NOT (A OR B)\n");
    printf("----|-----|------------\n");
    for (a = 0; a <= 1; a++) {
        for (b = 0; b <= 1; b++) {
            printf("%d   | %d   | %d\n", a, b, !(a || b));
        }
    }

    return 0;
}
