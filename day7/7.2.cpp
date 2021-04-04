// Listing 7.2
// Looping with while

#include <iostream>

int main() {
    int counter = 0;                                    // initialise the condition

    while(counter < 5) {                                // test contdition still true
        counter++;                                      // body of the loop
        std::cout << "counter: " << counter << "\n";
    }

    std::cout << "Complete. Counter: " << counter << "\n";
    return 0;
}