#include <iostream>

int main() {
    int intOne;
    int * pIntOne = &intOne;
    *pIntOne = 1;
    std::cout << "*pIntOne: " << *pIntOne << std::endl;
    return 0;
}