#include <iostream>
#include <cmath>

using namespace std;

// Declarar las variables globales
int A = 1;
int B = 10;
int C = 20;

int main() {
    // Calcular D directamente
    int D = C + B;

    // Mostrar variables
    cout << "Esto es A: " << A << endl;
    cout << "D equivale a: " << D << endl;

    // Cambiando la variable A
    A = 30;
    cout << "Ahora A equivale a: " << A << endl;

    // Agregar más variables y operaciones
    int E = A * B;
    cout << "E equivale a: " << E << endl;

    int F = D * C;
    cout << "F equivale a: " << F << endl;

    // Elevando una variable a una potencia "X"
    int base = 4;
    double potencia;
    cout << "A que potencia quieres elevar A? ";
    cin >> potencia;

    // Calcular resultado directamente
    double resultado = pow(base, potencia);

    // Mostrar el resultado de la potencia
    cout << "A elevado a la potencia " << potencia << " es: " << resultado << endl;

    // Jugando con las variables
    double G = resultado + E;
    cout << "G equivale a: " << G << endl;

    double H = G / F;
    cout << "H equivale a: " << H << endl;

    // Convirtiendo los resultados a enteros
    int H_entero = static_cast<int>(H);
    cout << "Mostrando H como entero: " << H_entero << endl;

    return 0;
}
