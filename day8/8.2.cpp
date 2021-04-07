// Listing 8.2 Using pointers

#include <iostream>

typedef unsigned short int USHORT;

int main() {

    using std::cout;

    USHORT myAge;                           // a variable
    USHORT * pAge = 0;                      // a pointer

    myAge = 5;

    cout << "myAge: " << myAge << "\n";
    pAge = &myAge;                          // assign address of myAge to pAge
    cout << "*pAge: " << *pAge << "\n\n";

    cout << "setting *pAge = 7...\n";
    *pAge = 7;                              // sets myAge to 7

    cout << "*pAge: " << *pAge << "\n";
    cout << "myAge: " << myAge << "\n\n";

    cout << "Setting myAge = 9...\n";
    myAge = 9;

    cout << "myAge: " << myAge << "\n";
    cout << "*pAge: " << *pAge << "\n";

    return 0;
}