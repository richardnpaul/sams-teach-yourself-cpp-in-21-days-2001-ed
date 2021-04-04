// Listing 7.6
// Demonstrates skipping the body of
// the while loop when the condition is false

#include <iostream>

int main() {
    int counter;
    std::cout << "how many hellos?: ";
    std::cin >> counter;
    while(counter > 0) {
        std::cout << "Hello!\n";
        counter--;
    }
    std::cout << "Counter is OutPut: " << counter;
    return 0;
}