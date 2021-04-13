// Listing 9.4
// References to class objects

#include <iostream>

class SimpleCat {
    public:
        SimpleCat(int age, int weight);
        ~SimpleCat() {}
        int GetAge() {return itsAge;}
        int GetWeight() {return itsWeight;}
    private:
        int itsAge;
        int itsWeight;
};

SimpleCat::SimpleCat(int age, int weight) {
    itsAge = age;
    itsWeight = weight;
}

int main() {
    SimpleCat Frisky(5,8);
    SimpleCat &rCat = Frisky;

    std::cout << "Frisky is: ";
    std::cout << Frisky.GetAge() << " years old.\n";
    std::cout << "And Frisky weighs: ";
    std::cout << rCat.GetWeight() << " pounds.\n";

    return 0;
}