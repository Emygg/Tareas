#include <iostream>

int main() {
    bool a, b;
    std::cout << "Tabla de verdad para la compuerta AND:" << std::endl;
    std::cout << "A   | B   | A AND B" << std::endl;
    std::cout << "----|-----|-------" << std::endl;
    for (a = false; a <= true; a = !a) {
        for (b = false; b <= true; b = !b) {
            std::cout << a << "   | " << b << "   | " << (a && b) << std::endl;
        }
    }

    std::cout << "\nTabla de verdad para la compuerta OR:" << std::endl;
    std::cout << "A   | B   | A OR B" << std::endl;
    std::cout << "----|-----|------" << std::endl;
    for (a = false; a <= true; a = !a) {
        for (b = false; b <= true; b = !b) {
            std::cout << a << "   | " << b << "   | " << (a || b) << std::endl;
        }
    }

    std::cout << "\nTabla de verdad para la negación de la compuerta AND:" << std::endl;
    std::cout << "A   | B   | NOT (A AND B)" << std::endl;
    std::cout << "----|-----|-------------" << std::endl;
    for (a = false; a <= true; a = !a) {
        for (b = false; b <= true; b = !b) {
            std::cout << a << "   | " << b << "   | " << !(a && b) << std::endl;
        }
    }

    std::cout << "\nTabla de verdad para la negación de la compuerta OR:" << std::endl;
    std::cout << "A   | B   | NOT (A OR B)" << std::endl;
    std::cout << "----|-----|------------" << std::endl;
    for (a = false; a <= true; a = !a) {
        for (b = false; b <= true; b = !b) {
            std::cout << a << "   | " << b << "   | " << !(a || b) << std::endl;
        }
    }

    return 0;
}
