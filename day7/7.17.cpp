// Listing 7.17
// Using a forever loop to manage
// user interaction

#include <iostream>

// prototypes
int menu ();
void DoTaskOne ();
void DoTaskMany (int);

using namespace std;

int main () {
    bool exit = false;
    for (;;) {
        int choice = menu ();
        switch (choice) {
            case (1):
                DoTaskOne ();
                break;
            case (2):
                DoTaskMany (2);
                break;
            case (3):
                DoTaskMany (3);
                break;
            case (4):
                continue;
                break;
            case (5):
                exit=true;
                break;
            default:
                cout << "Please select again!\n";
                break;
        }
        if (exit)
            break;
    }
    return 0;
}

int menu () {
    int choice;

    cout << " **** Menu ****\n\n";
    cout << "(1) Choice one.\n";
    cout << "(2) Choice two.\n";
    cout << "(3) Choice three.\n";
    cout << "(4) Redisplay menu.\n";
    cout << "(5) Quit.\n\n";
    cout << ": ";
    cin >> choice;
    return choice;
}

void DoTaskOne () {
    cout << "Task One!\n";
}

void DoTaskMany (int which) {
    if (which == 2) {
        cout << "Task Two!\n";
    } else {
        cout << "Task Three!\n";
    }
}