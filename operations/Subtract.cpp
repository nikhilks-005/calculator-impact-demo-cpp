#include "Subtract.h"
#include "../utils/Logger.h"

double Subtract::execute(double a, double b) {
    double result = a - b;
    Logger::log("Subtract: " + std::to_string(a) + " - " + std::to_string(b));
    return result;
}
