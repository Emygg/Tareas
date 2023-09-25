#include <iostream>

double power(double base, int exponent) {
    double result = 1.0;

    if (exponent < 0) {
        base = 1.0 / base;
        exponent = -exponent;
    }

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {
    double base;
    int exponent;

    std::cout << "Ingrese la base: ";
    std::cin >> base;
    std::cout << "Ingrese el exponente: ";
    std::cin >> exponent;

    double result = power(base, exponent);

    std::cout << base << " ^ " << exponent << " = " << result << std::endl;

    return 0;
}
