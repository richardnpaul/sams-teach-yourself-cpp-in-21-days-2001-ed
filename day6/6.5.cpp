// Listing 6.5 - Demonstrates compiler errors
// This program does not compile!

#include <iostream>

class Cat {
    public:
        Cat(int initialAge);
        ~Cat();
        int GetAge() const;
        void SetAge(int age);
        void Meow();
    private:
        int itsAge;
};

Cat::Cat(int initialAge) {
    itsAge = initialAge;
    std::cout << "Cat Constructor\n";
}

Cat::~Cat() {
    std::cout << "Cat Destructor\n";
}

// GetAge, const function
// but we violate const!
int Cat::GetAge() const {
    return (itsAge++);          // violates const!
}

// Definition of SetAge, public
// accessor function
void Cat::SetAge(int age)
{
    // set member variable itsAge to
    // value passed in by parameter age
    itsAge = age;
}

// Definition of Meow method
// returns: void
// parameters: none
// action: Prints "meow" to screen
void Cat::Meow()
{
    std::cout << "Meow.\n";
}

// demonstrate various violations of the
// interface, and resulting compiler errors
int main()
{
    Cat Frisky;             // doesn't match declaration
    Frisky.Meow();
    Frisky.Bark();          // No, silly, cat's can't bark
    Frisky.itsAge(7);       // itsAge is private
    return 0;
}