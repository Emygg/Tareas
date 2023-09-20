#include <stdio.h>
#include <stdlib.h>

char nombre[80];

int main()
{
    printf ("Escribe tu nombre (SOLO MAYUSCULAS): ");
    scanf ("%s", &nombre);
 
    printf ("Tu nombre es: %s\n", nombre);

     // Convertir el nombre a minúsculas
    int i = 0;
    while (nombre[i] != '\0') {
        if (nombre[i] >= 'A' && nombre[i] <= 'Z') {
            nombre[i] = nombre[i] + 32;
        }
        i++;
    }

    printf("Tu nombre en minúsculas es: %s\n", nombre);

    return 0;
}