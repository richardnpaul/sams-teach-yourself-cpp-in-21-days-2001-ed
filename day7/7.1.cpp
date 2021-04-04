// Listing 7.1
// Looping with goto

#include <iostream>

int main() {
    int counter = 0;                                // initialise counter
    loop: counter++;                                 // top of the loop
    std::cout << "counter: " << counter << "\n";
    if (counter < 5)                                // test the value
        goto loop;                                  // jump to the top
    
    std::cout << "Complete. Counter: " << counter << ".\n";
    return 0;
}