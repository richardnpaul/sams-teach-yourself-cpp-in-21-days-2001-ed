// Demonstrates inline functions
// and inclusion of header files

// be sure to include the header files!
#include "6.6.hpp"

Cat::Cat(int initialAge) {
    itsAge = initialAge;
}

Cat::~Cat() {}

// Create a cat, set its age, have it
// meow, tell us its age, then meow again.
int main() {
    Cat Frisky(5);
    Frisky.Meow();
    std::cout << "Frisky is a cat who is ";
    std::cout << Frisky.GetAge() << " years old.\n";
    Frisky.Meow();
    Frisky.SetAge(7);
    std::cout << "Now Frisky is ";
    std::cout << Frisky.GetAge() << " years old.\n";
    return 0;
}