#include <iostream>

class Employee {
public:
    int GetAge() const { return Age; }
    int GetYoS() const { return yearsOfService; }
    int GetSalary() const { return Salary; }
    void SetAge(int age) { Age = age; }
    void SetYoS(int YoS) { yearsOfService = YoS; }
    void SetSalary(int salary) { Salary = salary; }
    
    int GetRoundedSalary() const
    {
        if ((Salary % 1000) > 500)
            return (Salary / 1000) + 1;
        else
            return (Salary / 1000);
    }

private:
    int Age;
    int yearsOfService;
    int Salary;
};

int main() {
    Employee employee1;
    Employee employee2;
    employee1.SetAge(20);
    employee1.SetYoS(1);
    employee1.SetSalary(15000);
    employee2.SetAge(45);
    employee2.SetYoS(15);
    employee2.SetSalary(32750);
    std::cout << "Employee no.1 is " << employee1.GetAge() << " years old, has worked with us for " << employee1.GetYoS() << " year(s) and earns £" << employee1.GetRoundedSalary() << "k p/a.\n";
    std::cout << "Employee no.2 is " << employee2.GetAge() << " years old, has worked with us for " << employee2.GetYoS() << " year(s) and earns £" << employee2.GetRoundedSalary() << "k p/a.\n";
    return 0;
}