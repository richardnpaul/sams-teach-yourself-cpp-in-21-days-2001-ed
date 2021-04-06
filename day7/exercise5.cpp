#include <iostream>

int main () {
    int x = 100;
    do {
        std::cout << x << "  ";
        x += 2;
    } while (x < 201);
        std::cout << std::endl;
    return 0;
}