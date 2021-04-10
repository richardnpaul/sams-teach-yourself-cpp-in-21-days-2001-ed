// Listing 8.3 - What is stored in a pointer?

#include <iostream>

int main() {
    using std::cout;

    unsigned short int myAge = 5, yourAge = 10;
    
    // a pointer
    unsigned short int * pAge = &myAge;

    cout << "myAge:\t" << myAge << "\t\tyourAge:\t" << yourAge << std::endl;
    
    cout << "&myAge:\t" << &myAge << "\t&yourAge:\t" << &yourAge << std::endl;

    cout << "pAge:\t" << pAge << std::endl;
    cout << "*pAge:\t" << *pAge << std::endl;

    cout << "\nReassigning: pAge = &yourAge...\n\n";
    pAge = &yourAge;                                    //reassign the pointer

    cout << "myAge:\t" << myAge << "\t\tyourAge:\t" << yourAge << std::endl;
    
    cout << "&myAge:\t" << &myAge << "\t&yourAge:\t" << &yourAge << std::endl;

    cout << "pAge:\t" << pAge << std::endl;
    cout << "*pAge:\t" << *pAge << std::endl;

    cout << "&pAge:\t" << &pAge << std::endl;

    return 0;

}