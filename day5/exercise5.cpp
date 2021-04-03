#include <iostream>
float Divider(unsigned short int, unsigned short int);

int main() {
    unsigned short int x, y;
    std::cout << "\nInput two numbers: ";
    std::cin >> x;
    std::cin >> y;
    float result = Divider(x, y);
    if (result == -1) {
        std::cout << "\nCannot divide by zero\n";
    } else {
        std::cout << "\nResult is: " << result;
    }
    return 0;
}

float Divider(unsigned short int x, unsigned short int y) {
    if (y == 0) {
        return -1;
    } else {
        return (x / y);
    }
}