#include <iostream>

int main() 
{
    // Variables
    int favorite_number;
    
    // Request user's favorite number within the console
    std::cout << "Enter your favorite number between 1 and 100: ";
    
    // Store response in a variable
    std::cin >> favorite_number;
    
    // Respond to data entry
    std::cout << "Amazing!! That's my favorite number, too!" << std::endl;
    
    return 0;
}
