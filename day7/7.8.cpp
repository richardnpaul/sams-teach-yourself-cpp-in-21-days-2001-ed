// Listing 7.8
// Looping with while

#include <iostream>

int main() {
    int counter = 0;
    while(counter < 5) {
        counter++;
        std::cout << "Looping! ";
    }
    std::cout << "\nCounter: " << counter << ".\n";
    return 0;
}