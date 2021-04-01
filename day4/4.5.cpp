// Listing 4.5 - demonstrates if statement
// with else clause
#include <iostream>
int main() {
    using std::cout;
    using std::cin;

    int firstNumber, secondNumber;
    cout << "Please enter a big number: ";
    cin >> firstNumber;
    cout << "\nPlease enter a smaller number: ";
    cin >> secondNumber;
    if (firstNumber > secondNumber)
        cout << "\nThanks!\n";
    else
        cout << "\nOops. The second is bigger!";
    
    return 0;
}