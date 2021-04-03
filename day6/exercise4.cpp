#include <iostream>

class Employee {
public:
    Employee(int age, int yearsOfService, int Salary);
    ~Employee() {};
    int GetAge() const { return itsAge; }
    int GetYoS() const { return itsYearsOfService; }
    int GetSalary() const { return itsSalary; }
    void SetAge(int age) { itsAge = age; }
    void SetYoS(int YoS) { itsYearsOfService = YoS; }
    void SetSalary(int salary) { itsSalary = salary; }

    int GetRoundedSalary() const
    {
        if ((itsSalary % 1000) > 500)
            return (itsSalary / 1000) + 1;
        else
            return (itsSalary / 1000);
    }

private:
    int itsAge;
    int itsYearsOfService;
    int itsSalary;
};

Employee::Employee(int age, int yos, int salary) {
    itsAge = age;
    itsYearsOfService = yos;
    itsSalary = salary;
}

int main() {
    Employee employee1(20, 1, 15000);
    Employee employee2(45, 15, 32750);
    std::cout << "Employee no.1 is " << employee1.GetAge() << " years old, has worked with us for " << employee1.GetYoS() << " year(s) and earns £" << employee1.GetRoundedSalary() << "k p/a.\n";
    std::cout << "Employee no.2 is " << employee2.GetAge() << " years old, has worked with us for " << employee2.GetYoS() << " year(s) and earns £" << employee2.GetRoundedSalary() << "k p/a.\n";
    return 0;
}