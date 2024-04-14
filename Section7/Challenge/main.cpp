/*  Section 7
    Challenge
    
    Write a C++ program as follows:
    
    Declare 2 empty vectors of integers named
    vector1 and vector 2, respectively.
    
    Add 10 and 20 to vector1 dynamically using push_back
    Display the elements in vector1 using the at() method as well as its size using the size() method
    
    Add 100 and 200 to vector2 dynamically using push_back
    Display the elements in vector2 using the at() method as well as its size using the size() method

    Declare an empty 2D vector called vector_2d
    Remember, that a 2D vector is a vector of vector<int>
    
    Add vector1 to vector_2d dynamically using push_back
    Add vector2 to vector_2d dynamically using push_back
    
    Display the elements in vector_2d using the at() method
    
    Change vector1.at(0) to 1000
    
    Display the elements in vector_2d again using the at() method
    
    Display the elements in vector1 
    
    What did you expect? Did you get what you expected? What do you think happended?
*/
    
#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    // Declare vectors initialized as empty
    vector <int> vector1 {};
    vector <int> vector2 {};
    
    // Add elements to vector 1 and display contents and size
    vector1.push_back(10);
    vector1.push_back(20);
    cout << "vector1(0) = " << vector1.at(0) << " vector1(1) = " << vector1.at(1) << " vector1.size = " << vector1.size() << endl; 

    // Add elements to vector 2 and display contents and size
    vector2.push_back(10);
    vector2.push_back(20);
    cout << "vector2(0) = " << vector2.at(0) << " vector2(1) = " << vector2.at(1) << " vector2.size = " << vector2.size() << endl << endl; 

    // Declare 2D vector
    vector <vector<int>> vector_2d;
    
    // Add elements to vector 2d and display contents
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    cout << "vector_2d(0,0) = " << vector_2d.at(0).at(0) << " vector_2d(0,1) = " << vector_2d.at(0).at(1) << endl;    
    cout << "vector_2d(1,0) = " << vector_2d.at(1).at(0) << " vector_2d(1,1) = " << vector_2d.at(1).at(1) << endl << endl;    

    // Update vector 1's first element
    vector1.at(0) = 1000;
    cout << "updated vector1(0)" << endl;    
       
    // Display vector 2d contents again
    cout << "vector_2d(0,0) = " << vector_2d.at(0).at(0) << " vector_2d(0,1) = " << vector_2d.at(0).at(1) << endl;    
    cout << "vector_2d(1,0) = " << vector_2d.at(1).at(0) << " vector_2d(1,1) = " << vector_2d.at(1).at(1) << endl << endl;    

    // Display vector 1's contents again
    cout << "vector1(0) = " << vector1.at(0) << " vector1(1) = " << vector1.at(1) << " vector1.size = " << vector1.size() << endl; 

    cout << endl;
    return 0;
}

