#include <iostream>
#include <string>
#include <unistd.h>

using namespace std;

string Nombre;
int pin;
string nombre_usuario;
int pin_usuario;
float dinero_in;
float dinero_gua = 2840.34;
float dinero_total;
string respuesta;
string respuesta_co;
int intentos = 5;

int main() {
    cout << "Bienvenido, para registrarse escriba su nombre: ";
    cin >> Nombre;

    cout << "Ahora cree un pin de seguridad: ";
    cin >> pin;

    cout << "Sus datos han sido guardados correctamente, se los mostraremos a continuacion:\n";
    sleep(2);
    cout << "Su nombre es " << Nombre << endl;
    sleep(2);
    cout << "Su pin es " << pin << endl;

    while (intentos > 0) {
        sleep(5);
        cout << "Ahora inicie sesion para tener acceso a la app" << endl;
        sleep(2);
        cout << "Ingrese su nombre: ";
        cin >> nombre_usuario;
        sleep(1);
        cout << "Escribe tu pin: ";
        cin >> pin_usuario;

        if (nombre_usuario == Nombre && pin_usuario == pin) {
            cout << "Bienvenido de nuevo, el saldo en su cuenta es de " << dinero_gua << endl;

            cout << "¿Quiere ingresar dinero?";
            cin >> respuesta;
            if (respuesta == respuesta_co) {
                cout << "¿Cuanto dinero quiere ingresar?";
                cin >> dinero_in;

                dinero_total = dinero_gua + dinero_in;

                cout << "listo, su dinero total ahora es de " << dinero_total << endl;

            } else {
                cout << "Gracias por su visita, vuelva pronto" << endl;
                break;
            }
        } else {
            cout << "Datos incorrectos, vuelva a intentarlo" << endl;
            intentos--;
        }
    }

    return 0;
}


