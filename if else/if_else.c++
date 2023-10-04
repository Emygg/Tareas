#include <iostream>

int main() {
    int opcion;
    double resultado, numero1, numero2;
    char continuar;

    do {
        std::cout << "Selecciona una operacion matematica:" << std::endl;
        std::cout << "1. Suma" << std::endl;
        std::cout << "2. Resta" << std::endl;
        std::cout << "3. Multiplicacion" << std::endl;
        std::cout << "4. Division" << std::endl;
        std::cout << "Ingresa el numero de la opcion: ";
        std::cin >> opcion;

        if (opcion == 1) {
            std::cout << "Ingresa el primer numero: ";
            std::cin >> numero1;
            std::cout << "Ingresa el segundo numero: ";
            std::cin >> numero2;
            resultado = numero1 + numero2;
            std::cout << "El resultado de la suma es: " << resultado << std::endl;
        } else if (opcion == 2) {
            std::cout << "Ingresa el primer numero: ";
            std::cin >> numero1;
            std::cout << "Ingresa el segundo numero: ";
            std::cin >> numero2;
            resultado = numero1 - numero2;
            std::cout << "El resultado de la resta es: " << resultado << std::endl;
        } else if (opcion == 3) {
            std::cout << "Ingresa el primer numero: ";
            std::cin >> numero1;
            std::cout << "Ingresa el segundo numero: ";
            std::cin >> numero2;
            resultado = numero1 * numero2;
            std::cout << "El resultado de la multiplicacion es: " << resultado << std::endl;
        } else if (opcion == 4) {
            std::cout << "Ingresa el primer numero: ";
            std::cin >> numero1;
            std::cout << "Ingresa el segundo numero (distinto de 0): ";
            std::cin >> numero2;
            if (numero2 != 0) {
                resultado = numero1 / numero2;
                std::cout << "El resultado de la division es: " << resultado << std::endl;
            } else {
                std::cout << "Error: No puedes dividir entre cero." << std::endl;
            }
        } else {
            std::cout << "Opcion no valida." << std::endl;
        }

        std::cout << "¿Deseas hacer otra operacion? (s/n): ";
        std::cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    return 0;
}
