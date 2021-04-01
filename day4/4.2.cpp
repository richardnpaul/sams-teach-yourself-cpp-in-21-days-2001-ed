// Listing 4.2 - demonstrates subtration and 
// integer overflow
#include <iostream>

int main() {
    using std::cout;
    using std::endl;

    unsigned int difference, bigNumber = 100, smallNumber = 50;
    difference = bigNumber - smallNumber;
    cout << "Difference is: " << difference;
    difference = smallNumber - bigNumber;
    cout << "\nNow difference is: " << difference << endl;
    return 0;
}