#include <iostream>
#include "calculator.h"

int main() {
    std::cout << "Hello, Calculator!" << std::endl;

    Calculator calculator;
    int a = 2, b = 3;
    int c = calculator.add(a,b);

    std::cout << "Adding " + std::to_string(a) + " to " + std::to_string(b) + " results in " + std::to_string(c) << std::endl;

    return 0;
}
