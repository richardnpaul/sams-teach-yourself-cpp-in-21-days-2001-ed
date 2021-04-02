// Listing 5.9 - demonstrates inline functions

#include <iostream>

inline int Double(int);

int main() {
    int target;
    using std::cout;
    using std::cin;
    using std::endl;

    cout << "Enter a number to work with: ";
    cin >> target;
    cout << "\n";

    target = Double(target);
    cout << "Target: " << target << endl;
    
    target = Double(target);
    cout << "Target: " << target << endl;

    target = Double(target);
    cout << "Target: " << target << endl;

    return 0;
}

int Double(int target) {
    return 2 * target;
}