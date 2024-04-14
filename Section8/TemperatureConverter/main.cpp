// Section 8
// Convert Farenheit to Celsius

#include <iostream>

using namespace std;

int main() {
    // Declare constant values for temperature conversion
    const int freezing_point {32};
    const double conversion_factor {1.8};
    
    // Prompt for input temp in farenheit
    cout << "Welcome to the Fahrenheit (F) to Celsius (C) converter" << endl;
    cout << "Enter a temperature value in Fahrenheit (F): ";
    
    // Create variables to store input and output temps
    double deg_far {0.0};
    double deg_cel {0.0};
    
    // Store input temp
    cin >> deg_far;
    
    // Convert to celsuis
    deg_cel = (deg_far - freezing_point) / conversion_factor;
    
    cout << deg_far << " deg F is equivalent to " << deg_cel << " deg C" << endl;

    cout  << endl;
    return 0;
}