
#include "Employee.h"

class Manager : public Employee {
private:
    int bonus;
public:
    Manager(string name, int salary, int bonus) : Employee(name, salary){
        this->bonus = bonus;
    }
    void setBonus(int bonus) {
        this->bonus = bonus;
    }
    int getBonus() {
        return bonus;
    }
    int getSalary() {
        return Employee::getSalary() + bonus;
    }
    void display() {
        cout << "Name: " << getName() << endl;
        cout << "Salary: " << getSalary() << endl;
    }
};

