// Demonstration of variables
#include <iostream>

int main() {
    using std::cout;
    using std::endl;

    unsigned short int Width = 5, Length;
    Length = 10;
    // create an unsign short and initialise with result
    // of multiplying Width by Length
    unsigned short int Area = (Width * Length);

    cout << "Width:" << Width << "\n";
    cout << "Length:" << Length << endl;
    cout << "Area:" << Area << endl;
    return 0;
}