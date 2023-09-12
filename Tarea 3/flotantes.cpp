#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float a, b, c, d, numero1, numero2, numero3;
    a = 13.56;
    b = 16.34;
    c = 35.34;
    d = a + b * c;

    cout << "Esto es a: " << fixed << setprecision(2) << a << endl;
    cout << "Esto es b: " << fixed << setprecision(2) << b << endl;
    cout << "Esto es c: " << fixed << setprecision(2) << c << endl;
    cout << "Esto es d: " << fixed << setprecision(2) << d << endl;

    // Escoger el valor de las variables

    cout << "Dime un numero: ";
    cin >> numero1;
    cout << "Elegiste el numero " << fixed << setprecision(2) << numero1 << endl;

    cout << "Dime un numero: ";
    cin >> numero2;
    cout << "Elegiste el numero " << fixed << setprecision(2) << numero2 << endl;

    cout << "Dime un numero: ";
    cin >> numero3;
    cout << "Elegiste el numero " << fixed << setprecision(2) << numero3 << endl;

    return 0;
}
