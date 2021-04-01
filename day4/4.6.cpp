// Listing 4.6 - a complex nested
// if statement
#include <iostream>
int main() {
    // Ask for two numbers
    // Assign the number to bigNumber and littleNumber
    // If bigNumber is bigger than littleNumber,
    // see if they are evenly divisible
    // If they are, see if they are the same number

    using namespace std;

    int firstNumber, secondNumber;
    cout << "Enter two numbers.\nFirst: ";
    cin >> firstNumber;
    cout << "\nSecond: ";
    cin >> secondNumber;
    cout << "\n\n";

    if (firstNumber >= secondNumber) {
        if ((firstNumber % secondNumber) == 0) {// evenly divisible?
            if (firstNumber == secondNumber)
                cout << "They are the same!\n";
            else
                cout << "They are evenly divisible!\n";
        } else
            cout << "They are not evenly divisible!\n";
    } else
        cout << "Hey! The second one is larger!\n";
    return 0;
}