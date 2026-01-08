#include <iostream>
#include <string>

int main() {
    std::string name;
    
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);
    
    std::cout << "Hello, " << name << "! Welcome to C++ programming!" << std::endl;
    
    // Basic calculation example
    int num1, num2;
    std::cout << "\nEnter two numbers: ";
    std::cin >> num1 >> num2;
    
    std::cout << "Sum: " << num1 + num2 << std::endl;
    std::cout << "Product: " << num1 * num2 << std::endl;
    
    return 0;
}
