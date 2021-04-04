// Listing 7.5
// Demonstates a while true loop

#include <iostream>

int main() {
    int counter = 0;

    while(true) {
        counter++;
        if (counter > 10)
            break;
    }

    std::cout << "Counter: " << counter << "\n";
    return 0;
}