#include <stdio.h>
#include <math.h>

// Declarar las variables globales
int A = 1;
int B = 10;
int C = 20;

int main() {
    // Calcular D directamente
    int D = C + B;

    // Mostrar variables
    printf("Esto es A: %d\n", A);
    printf("D equivale a: %d\n", D);

    // Cambiando la variable A
    A = 30;
    printf("Ahora A equivale a: %d\n", A);

    // Agregar más variables y operaciones
    int E = A * B;
    printf("E equivale a: %d\n", E);

    int F = D * C;
    printf("F equivale a: %d\n", F);

    // Elevando una variable a una potencia "X"
    int base = 4;
    double potencia;
    printf("A que potencia quieres elevar A? ");
    scanf("%lf", &potencia);

    // Calcular resultado directamente
    double resultado = pow(base, potencia);

    // Mostrar el resultado de la potencia
    printf("A elevado a la potencia %.2lf es: %.2lf\n", potencia, resultado);

    // Jugando con las variables
    double G = resultado + E;
    printf("G equivale a: %.2lf\n", G);

    double H = G / F;
    printf("H equivale a: %.2lf\n", H);

    // Convirtiendo los resultados a enteros
    int H_entero = (int)H;
    printf("Mostrando H como entero: %d\n", H_entero);

    return 0;
}