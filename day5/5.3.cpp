#include <iostream>
void myFunction();          // prototype

int x = 5, y = 7;           // global variables
int main() {
    using std::cout;

    cout << "x from main: " << x << "\n";
    cout << "y from main: " << y << "\n\n";
    myFunction();
    cout << "Back from  myFunction!\n\n";
    cout << "x from main: " << x << "\n";
    cout << "y from main: " << y << "\n";
    return 0;
}

void myFunction() {
    using std::cout;

    int y = 10;

    cout << "x from myFunction: " << x << "\n";
    cout << "y from myFunction: " << y << "\n\n";
}