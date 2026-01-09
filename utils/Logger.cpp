#include "Logger.h"
#include <iostream>

void Logger::log(const std::string& message) {
    std::cout << "[LOG] " << message << std::endl;
}

void Logger::print(const std::string& message) {
    std::cout << "[LOG] " << message << std::endl;
}
