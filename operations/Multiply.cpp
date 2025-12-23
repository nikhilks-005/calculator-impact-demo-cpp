#include "Multiply.h"
#include "../utils/Logger.h"

double Multiply::execute(double a, double b) {
    double result = a * b;
    Logger::log("Multiply: " + std::to_string(a) + " * " + std::to_string(b));
    return result;
}
