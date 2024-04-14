#include <iostream>

int main() {
    int favorite_number;
    
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favorite_number;
    
    if (favorite_number < 1 || favorite_number > 100) {
        std::cout << "Your favorite number: " << favorite_number << " is not between 1 and 100" << std::endl;
        exit(1);
    }
    
    std::cout << "Amazing!! That's my favorite number, too!" << std::endl;
    std::cout << "No really!!, " << favorite_number << " is my favorite number!" << std::endl;
    
    return 0;
}