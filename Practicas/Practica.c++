#include <iostream>
#include <cmath>

using namespace std;

float suma(float numero1, float numero2)
{
    return numero1 + numero2;
}

float resta(float numero1, float numero2)
{
    return numero1 - numero2;
}

float multiplicacion(float numero1, float numero2)
{
    return numero1 * numero2;
}

float division(float numero1, float numero2) {
    if (numero2 != 0) {
        return numero1 / numero2;
    } else {
        cout << "No puedes dividir entre cero." << endl;
        return 0;
    }
}

float potencia(float base, int exponente) {
    float resultado = 1;
    for (int i = 0; i < exponente; i++ );{
        resultado *= base;
    }
    return resultado;

}

double Raiz(double numero, int n){
    if (numero < 0 && n % 2 == 0){
        std::cerr << "No se puede calcular la raiz " << n << "-esima de un numero negativo" << std::endl;
        return 0.0;
    }

    return pow(numero, 1.0 / n);

}

int main(){
    while (true) {
        cout << "¿Qué operación quieres hacer?" << endl;
        cout << "1. Suma" << endl;
        cout << "2. Resta" << endl;
        cout << "3. Multiplicación" << endl;
        cout << "4. División" << endl;
        cout << "5. Potencia" << endl;
        cout << "6. Raiz" << endl;
        int operacion;
        cin >> operacion;



        switch (operacion){
            case 1:
                float numero1, numero2;
                cout << "Dime un numero: ";
                cin >> numero1;
                cout << "Dime otro numero: ";
                cin >> numero2;
                float resultado = suma(numero1, numero2);
                cout <<resultado << endl;
                break;

            case 2: {
                float numero1, numero2;
                cout << "Dime un numero: ";
                cin >> numero1;
                cout << "Dime un numero: ";
                cin >> numero2;
                float resultado = resta(numero1, numero2);
                cout << resultado << endl;
                break;

            case 3: 
                float numero1, numero2;
                cout << "Dime un numero: ";
                cin >> numero1;
                cout << "dime otro numero: ";
                cin >> numero2;
                float resultado = multiplicacion(numero1, numero2);
                cout << resultado << endl;

            case 4: 
                float numero1, numero2;
                cout << "Dime un numero: ";
                cin >> numero1;
                cout << "Dime un numero: ";
                cin >> numero2;
                float resultado = multiplicacion(numero1, numero2);
                cout << resultado << endl;
                break;

            case 5:
                float base;
                int exponente;
                    cout << "Dime un numero: ";
                    cin >> base;
                    cout << "Dime a que potencia quieres que lo eleve: ";
                    cin >> exponente;
                    float resultado = potencia(base, exponente);
                    cout << resultado << endl;
                    break;
            case 6:
                double numero;
                int n;

                std::cout << "Introduce el numero: ";
                std::cin >> numero;
                std::cout << "Introduce el valor de n (para la raiz n-esima): ";
                std::cin >> n;

                double resultado = Raiz(numero, n);
                std::cout << "La raiz " << n << "-esima de " << numero << " es: " << resultado << std::endl;
                break;
                
            }

            }
    }
}