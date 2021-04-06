// Listing 7.12 illustrating
// empty for loop statement

#include <iostream>

int main() {

    int counter = 0;
    int max;
    std::cout << "How many hellos?";
    std::cin >> max;
    for(;;) {
        if (counter < max) {
            std::cout << "Hello!\n";
            counter++;
        } else {
            break;
        }
    }
    return 0;
}