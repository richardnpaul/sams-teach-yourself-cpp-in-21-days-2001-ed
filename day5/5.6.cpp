// Listing 5.6 - demonstrates multiple return
// statements

#include <iostream>

int Doubler(int AmountToDouble);

int main() {
    using std::cout;

    int result = 0, input;

    cout << "Enter a number between 0 and 10,000 to double: ";
    std::cin >> input;

    cout << "\nBefore doubler is called... ";
    cout << "\ninput: " << input << " doubled: " << result << "\n";

    result = Doubler(input);

    cout << "\nBack from Doubler...\n";
    cout << "\ninput: " << input << " doubled: " << result << "\n";

    return 0;
}

int Doubler(int original) {
    if (original <= 10000)
        return original * 2;
    else
        return -1;
    std::cout << "You can't get here!\n";
}