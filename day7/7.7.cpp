// Listing 7.7
// Demonstrating do while

#include <iostream>

int main() {
    using namespace std;
    int counter;
    cout << "How many hellos? ";
    cin >> counter;
    do {
        cout << "Hello\n";
        counter--;
    } while(counter > 0);
    cout << "Counter is: " << counter << endl;
    return 0;
}