// Listing 7.13
// Demonstrates null statement
// as body of for loop

#include <iostream>

int main() {
    for(int i = 0; i < 5; std::cout << "i: " << i++ << std::endl);
    return 0;
}