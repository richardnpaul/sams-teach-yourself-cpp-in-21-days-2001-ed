#include <iostream>

unsigned long int PowerUp(short int number, short int power);

int main() {
    using std::cout;
    using std::cin;

    short int number, power;

    cout << "Input a number: ";
    cin >> number;
    cout << "\nInput a power: ";
    cin >> power;
    cout << "\nYour number " << number << " to the power of " << power << " results in: " << PowerUp(number, power) << "\n";
    return 0;
}

unsigned long int PowerUp(short int number, short int power) {
    if (power > 1) {
        return (number * PowerUp(number, power-1));
    } else {
        return number;
    }
}