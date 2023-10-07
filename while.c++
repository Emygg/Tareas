#include <iostream>

int main() {
    int opcion;
    double resultado, numero1, numero2;
    char continuar;

    do { // Aquí se establecen los casos posibles en este caso con operaciones matemáticas
        std::cout << "Selecciona una operacion matematica:" << std::endl;
        std::cout << "1. Suma" << std::endl;
        std::cout << "2. Resta" << std::endl;
        std::cout << "3. Multiplicacion" << std::endl;
        std::cout << "4. Division" << std::endl;
        std::cout << "Ingresa el numero de la opcion: ";
        std::cin >> opcion;

        switch (opcion) {  // Aquí empieza a comparar los casos posibles con la opción elegida
            case 1:
                std::cout << "Ingresa el primer numero: ";
                std::cin >> numero1;
                std::cout << "Ingresa el segundo numero: ";
                std::cin >> numero2;
                resultado = numero1 + numero2;
                std::cout << "El resultado de la suma es: " << resultado << std::endl;
                break;
            case 2:
                std::cout << "Ingresa el primer numero: ";
                std::cin >> numero1;
                std::cout << "Ingresa el segundo numero: ";
                std::cin >> numero2;
                resultado = numero1 - numero2;
                std::cout << "El resultado de la resta es: " << resultado << std::endl;
                break;
            case 3:
                std::cout << "Ingresa el primer numero: ";
                std::cin >> numero1;
                std::cout << "Ingresa el segundo numero: ";
                std::cin >> numero2;
                resultado = numero1 * numero2;
                std::cout << "El resultado de la multiplicacion es: " << resultado << std::endl;
                break;
            case 4:
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
                break;
            default:
                std::cout << "Opcion no valida." << std::endl;
                break;
        }

        std::cout << "¿Deseas hacer otra operacion? (s/n): "; // Al acabar la operacion deseada pregunta si quieres volver a hacer otra operacion
        std::cin >> continuar;

    } while (continuar == 's' || continuar == 'S');

    return 0;
}