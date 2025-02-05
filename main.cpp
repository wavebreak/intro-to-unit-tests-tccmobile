#include <iostream>
#include "src/calculator.h"

int main() {
    Calculator calc;
    
    std::cout << "Simple Calculator Demo\n";
    std::cout << "2 + 2 = " << calc.add(2, 2) << "\n";
    std::cout << "5 - 3 = " << calc.subtract(5, 3) << "\n";
    std::cout << "4 * 3 = " << calc.multiply(4, 3) << "\n";
    std::cout << "10 / 2 = " << calc.divide(10, 2) << "\n";
    
    return 0;
} 