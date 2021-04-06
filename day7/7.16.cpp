// Listing 7.16
// Demonstrates switch statements

#include <iostream>

int main () {
    using namespace std;
    unsigned short int number;
    cout << "Enter a number between 1 and 5: ";
    cin >> number;
    
    switch (number) {
        case 0:
            cout << "Too small, sorry!";
            break;
        case 5:
            cout << "Good job!\n";
        case 4:
            cout << "Nice pick!\n";
        case 3:
            cout << "Excellent!\n";
        case 2:
            cout << "Masterful!\n";
        case 1:
            cout << "Incredible!\n";
            break;
        default:
            cout << "Too large!\n";
            break;
    }

    cout << "\n\n";
    return 0;
}