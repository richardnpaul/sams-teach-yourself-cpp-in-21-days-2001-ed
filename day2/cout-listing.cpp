// Listing 2.4 using std::cout
#include <iostream>
int main() {
    using namespace std;

    cout << "Hello there.\n";
    cout << "Here is 5: " << 5 << "\n";
    cout << "The manipulator endl ";
    cout << "writes a new line to the screen.";
    cout << endl;
    cout << "Here is a very big number:\t" << 70000;
    cout << endl;
    cout << "Here is the sum of 8 and 5:\t";
    cout << 8+5 << endl;
    cout << "Here's a fraction:\t\t";
    cout << (float) 5/8 << endl;
    cout << "And a very very big number:\t";
    cout << (double) 7000 * 7000 << endl;
    cout << "Don't forget to replace Jesse Liberty ";
    cout << "with your name...\n";
    cout << "Richard Paul is a C++ programmer!\n";;
    return 0;
}