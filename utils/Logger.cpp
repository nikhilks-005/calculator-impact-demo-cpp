#include "Logger.h"
#include <iostream>

void Logger::loger(const std::string& message) {
    std::cout << "[LOG] " << message << std::endl;
}
