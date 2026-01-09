#include "../services/CalculatorService.h"
#include <iostream>

int main() {
    CalculatorService calculator;

    std::cout << calculator.calculate("add", 10, 5) << std::endl;
    std::cout << calculator.calculate("subtract", 10, 5) << std::endl;
    std::cout << calculator.calculate("multiply", 10, 5) << std::endl;
    std::cout << calculator.calculate("divide", 10, 5) << std::endl;

    return 0;
}
