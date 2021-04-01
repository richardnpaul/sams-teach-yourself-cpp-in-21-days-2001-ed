#include <iostream>
int main() {
    int x = 1, y = 2;
    if (x > y){
        x = y;
    } else {
        y = x;
    }
    std::cout << "x: " << x << " y: " << y;
    return 0;
}