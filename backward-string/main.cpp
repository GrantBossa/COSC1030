//
// Grant Bossa
// June 14, 2025
// Backward String Programming Project
// COSC 1030
//

#include <iostream>
#include <cstring>
using namespace std;

// Function prototype
void backward_string(char *);


int main() 
{
    // Define an array to hold input.
    const int SIZE = 80;
    char input[SIZE];

    // Get a string from the user.
    cout << "Please enter a string to be displayed backwards: \n";
    cin.getline(input, SIZE);

    // Display it backward.
    backward_string(input);
    return 0;
}

// the backward_string function accepts a pointer to a string and displays it backwards.
void backward_string(char *str) 
{
    // Get the subscript of the last character in the string.
    int last_position = strlen(str) - 1;

    // Work backward through the string, displaying each char.
    for ( int index = last_position; index >=0; index--)
        cout << str[index];
    
    // End the line
    cout << endl;
}