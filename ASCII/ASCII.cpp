#include <iostream>

using namespace std;

int main() {
    char nombre[80];

    cout << "Escribe tu nombre (SOLO MAYUSCULAS): ";
    cin >> nombre;

    cout << "Tu nombre es: " << nombre << endl;

    // Convertir el nombre a minúsculas
    int i = 0;
    while (nombre[i] != '\0') {
        if (nombre[i] >= 'A' && nombre[i] <= 'Z') {
            nombre[i] = nombre[i] + 32;
        }
        i++;
    }

    cout << "Tu nombre en minúsculas es: " << nombre << endl;

    return 0;
}
