#include "Add.h"
#include "../utils/Logger.h"

double Add::execute(double a,double b) {
    double result = a + b;
    Logger::log("Add: " + std::to_string(a) + " + " + std::to_string(b));
    return result;
}
