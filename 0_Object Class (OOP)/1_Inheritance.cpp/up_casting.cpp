
/*
    Up-casting:
    + khi biến con trỏ của lớp cha trở tới đối tượng của lớp con thì đó gọi là "Up-casting"


    + Đối tượng của lớp con bị chuyển kiểu về đối tượng của lớp cha. Đó chính là Up-casting


LƯU Ý:
    Khi biến của lớp cha tham chiếu tới đối tượng của lớp con thì biến này có thể gọi tới được
    thuộc tính và phương thức của lớp cha.
*/

#include<iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "Some sound" << endl;
    }
};

class Cat : public Animal {
public:
    void sound() {
        cout << "Meow meow" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Woof woof" << endl;
    }
};

int main() {
    Cat cat;
    Animal *animal_1 = &cat;
    animal_1->sound();

    Dog dog;
    Animal *animal_2 = &dog;
    animal_2->sound();

    return 0;
}