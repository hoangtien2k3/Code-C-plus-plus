
/*
    Down-casting:
    + Down-casting thì được lại với us-casting. Up-casting là chuyển lớp con sang kiểu con trỏ 
    của lớp cha. Còn Down-casting thì ngược lại chuyển từ lớp cha sang kiểu con trỏ của lớp con.

    + Down-casting có đặc điểm là bạn có thể gọi tới các phương thức chỉ có ở lớp con mà không có 
    ở lớp cha.

*/

#include<iostream>
using namespace std;

class Animal {
public:
    void sound() {
        cout << "Some sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() {
        cout << "Woof woof" << endl;
    }
    void play() {
        cout << "The dog is playing!" << endl;
    }
};

int main() {
    Animal animal;
    Dog *dog = (Dog*)&animal;

    dog->sound();
    dog->play();
    
    return 0;
}