// Listing 7.11
// For loops with null statements

#include <iostream>

int main() {

    int counter = 0;
    for(; counter < 5;) {
        counter++;
        std::cout << "Looping!  ";
    }

    std::cout << "\nCounter: " << counter << ".\n";
    return 0;
}