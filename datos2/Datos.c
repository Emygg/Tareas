#include <stdio.h>
#include <unistd.h>
#include <string.h>

char Nombre[50];
int pin;
char nombre_usuario[50];
int pin_usuario;
float dinero_in;
float dinero_gua = 2840.34;
float dinero_total;
char respuesta[2];
char respuesta_co;
int intentos = 5;

int main()
{
    printf("Bienvenido, para registrarse escriba su nombre: ");
    scanf ("%s", &Nombre);

    printf("Ahora cree un pin de seguridad: ");
    scanf ("%d", &pin);

    printf("Sus datos han sido guardados correctamente, se los mostraremos a continuacion:\n");
    sleep(2);
    printf("Su nombre es %s\n", Nombre);
    sleep(2);
    printf("Su pin es %d\n", pin);

    while (intentos > 0 )
    {
        sleep(5);
        printf("Ahora inicie sesion para tener acceso a la app\n");
        sleep(2);
        printf("Ingrese su nombre: ");
        scanf ("%s", nombre_usuario);
        sleep(1);
        printf("Escribe tu pin: ");
        scanf ("%d", pin_usuario);

        if(strcmp(nombre_usuario, Nombre) == 0 && pin_usuario == pin)
        {
        printf("Bienvenido de nuevo, el saldo en su cuenta es de %f\n", dinero_gua);

        printf("¿Quiere ingresar dinero?");
        scanf("%1s", respuesta);
            if (strcmp(respuesta, respuesta_co) == 0)
            {
                printf("¿Cuanto dinero quiere ingresar?");
                scanf("%f", dinero_in);

                dinero_total = dinero_gua + dinero_in;

                printf("listo, su dinero total ahora es de %f\n", dinero_total);

            }
            else
            {
                printf("Gracias por su visita, vuelva pronto");
                break;
            }
        }
        else
        {
            printf("Datos incorrectos, vuelva a intentarlo");
            intentos - 1;
        }

    }



return 0;
}