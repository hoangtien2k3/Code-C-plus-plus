

#include <iostream>
 
using namespace std;
 
class Employee {
public:
    int id; // data member (bien instance)
    string name; // data member(bien instance)
    float salary;
    Employee(int i, string n, float s)
    {
        id = i;
        name = n;
        salary = s;
    }
    void display() { cout << id << "  " << name << "  " << salary << endl; }
};
 
int main(void) {
    Employee e1 = Employee(101, "Phan Van Vinh", 500); // tao doi tuong Employee
    Employee e2 = Employee(102, "Dao Van Hoa", 1000);
    e1.display();
    e2.display();
    return 0;
}