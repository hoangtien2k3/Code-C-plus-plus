// C++ virtual function

/*
     !Function Virtual in C++ in Base class

    + the function virtual is a member fuction base class that you redefine in a driver class.
    and it's declaced using the Virtual key.

    + 


     ! Reles of Virtual Function:
    + Virtual function must be member of some class.

    + Virtual Function cannot be static members.

    + They are accessed through object pointer.

    + They can be a friend another class.

    + 'Virtual' function must be defined in the base class.

*/

#include<iostream>
#include<cmath>
#include<string>

class base {
    public: 
        virtual void display() {
            std::cout << "Tien Dep Trai!!!" << std::endl;
        }
};

class driver : public base {
    public: 
        void display() {
            std::cout << "Tao La Tien Oke!!!" << std::endl;
        }
};

int main() {
    
    driver obj1;
    base *p1 = &obj1;

    p1->display();

    obj1.display();




    return 0;
}