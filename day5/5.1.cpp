// Listing 5.1 - demonstrates the use of function prototypes

#include <iostream>
int Area(int length, int width); // function prototype

int main() {
    using std::cout;
    using std::cin;

    int lengthOfYard, widthOfYard, areaOfYard;

    cout << "\nHow wide is your yard? ";
    cin >> widthOfYard;
    cout << "\nHow long is your yard? ";
    cin >> lengthOfYard;

    areaOfYard = Area(lengthOfYard, widthOfYard);

    cout << "\nYour yard is ";
    cout << areaOfYard;
    cout << " square feet\n\n";
    return 0;
}

int Area(int l, int w) {
    return l * w;
}