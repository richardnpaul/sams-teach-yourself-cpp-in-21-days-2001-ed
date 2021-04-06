// Listing 7.15
// Demonstrates solving the nth
// Fibonacci number using iteration

#include <iostream>

int fib (int position);

int main () {
    using namespace std;
    int answer, position;
    cout << "Which position? ";
    cin >> position;
    cout << "\n";

    answer = fib(position);
    cout << answer << " is the ";
    cout << position << "th Fibonacci number.\n";
    return 0;
}

int fib (int n) {
    int minusTwo=1, minusOne=1, answer=2;
    if (n < 3) {
        return 1;
    }

    for (n -= 3; n; n--) {
        minusTwo = minusOne;
        minusOne = answer;
        answer = minusOne + minusTwo;
    }

    return answer;
}