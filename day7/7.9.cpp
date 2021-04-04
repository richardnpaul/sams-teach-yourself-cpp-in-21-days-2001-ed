// Listing 7.9
// Looping with for

#include <iostream>

int main() {
    int counter;
    for (counter = 0; counter < 5; counter++)
        std::cout << "Looping! ";
    
    std::cout << "\nCounter: " << counter << ".\n";
    return 0;
}