#include "CalculatorService.h"

#include "../operations/Add.h"
#include "../operations/Subtract.h"
#include "../operations/Multiply.h"
#include "../operations/Divide.h"

#include <string>

double CalculatorService::calculate(const char* operation, double a, double b) {
    std::string op(operation);

    if (op == "add") {
        Add add;
        return add.execute(a, b);
    }
    else if (op == "subtract") {
        Subtract sub;
        return sub.execute(a, b);
    }
    else if (op == "multiply") {
        Multiply mul;
        return mul.execute(a, b);
    }
    else if (op == "divide") {
        Divide div;
        return div.execute(a, b);
    }

    throw std::runtime_error("Unknown operation");
}
