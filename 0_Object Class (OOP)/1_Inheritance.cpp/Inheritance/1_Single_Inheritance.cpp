
// ! C++ Single Inheritance: Tính kế thừa đơn.

#include<iostream>
#include<cmath>
using namespace std;

class Account { // base class: lớp cơ sở (lớp cha)
    public:
        float salary = 600000;
        int a = 4;
        int b = 5;
        void eat() {
            cout << "Hoang Anh Tien..." << endl;
        }
        int mul() {
            return a * b;
        }
};

class Programer : public Account { // driver class: lớp dẫn xuất (lớp con)
    public:
        float bonus = 5000;
        void bark() {
            cout << "Dep Trai Nhat The Gioi..." << endl;
        }
        int result = mul();
};

int main() {
    Programer p1;
    cout << "Salary: " << p1.salary << endl;
    cout << "Bonus: " << p1.bonus << endl;
    p1.eat();
    p1.bark();
    p1.result;
    cout << "Ket Qua a * b = " << " "<< p1.a << " * " << " " << p1.b << " = " << p1.result << endl;
    return 0;
}