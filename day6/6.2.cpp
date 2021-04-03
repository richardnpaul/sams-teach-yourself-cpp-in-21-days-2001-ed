// Listing 6.2 - Cat class declaration
// Data members are private, public accessor methods
// mediate setting and getting the values of the private data

class Cat {
    public:
        unsigned int GetAge();
        void SetAge(unsigned int Age);

        unsigned int GetWeight();
        void SetWeight(unsigned int Weight);

        void Meow();
    private:
        unsigned int itsAge;
        unsigned int itsWeight;
};