// Listing 8.1 Demonstrates address of operator
// and addresses of local variables

#include <iostream>

int main() {
    using namespace std;
    unsigned short int shortVar = 5;
    unsigned long int  longVar  = 65535;
    long int           sVar     = -65535;

    cout << "shortVar:\t" << shortVar;
    cout << "\tAddress of shortVar:\t";
    cout << &shortVar << "\n";

    cout << "longVar:\t" << longVar;
    cout << "\tAddress of longVar:\t";
    cout << &longVar << "\n";

    cout << "sVar:\t\t" << sVar;
    cout << "\tAddress of sVar:\t";
    cout << &sVar << "\n";

    return 0;
}