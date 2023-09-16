#include "log.hpp"

#include <iostream>

void log(std::string message) {
    std::cout << "INFO: " << message << std::endl;
}


void logError(std::string message) {
    std::cerr << "ERROR: " << message << std::endl;
}
