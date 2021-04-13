// Listing 9.2
// Demonstrating the use of References

#include <iostream>

int main() {
    using namespace std;
    int intOne;
    int &rSomeRef = intOne;

    intOne = 5;
    cout << "intOne:\t\t" << intOne << endl;
    cout << "rSomeRef:\t" << rSomeRef << endl;

    cout << "&intOne:\t" << &intOne << endl;
    cout << "&rSomeRef:\t" << &rSomeRef << endl;

    return 0;
}