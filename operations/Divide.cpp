#include "Divide.h"
#include "../utils/Logger.h"
#include <stdexcept>

double Divide::execute(double a, double b) {
    if (b == 0) {
        throw std::runtime_error("Division by zero");
    }
    double result = a / b;
    Logger::log("Divide: " + std::to_string(a) + " / " + std::to_string(b));
    return result;
}
