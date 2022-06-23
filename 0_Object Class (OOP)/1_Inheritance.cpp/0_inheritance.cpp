/*

    !   Inheritance: ( Tính kế thừa )

    Tính kế thừa là một quá trình trong đó đối tượng sẽ tự động kế thừa tất cả các thuộc tính và hành vi
    của đối tượng cha mẹ của nó. 

    Vì thế có thể dễ dàng sử đổi và mở rộng các thuộc tính trong lớp class

    Một trong những khái niệm quan trọng nhất trong lập trình hướng đối tượng là Tính kế thừa (Inheritance).
    Kế thừa trong C++ là sự liên quan giữa hai class với nhau, trong đó có class cơ sở (Base Class) 
    class con (Derived Class). Khi kế thừa class con được hưởng tất cả các phương thức và 
    thuộc tính của class cơ sở.


    !  Types Of Inheritance:
        + Single inheritance : kế thừa đơn
        + Multiple inheritance : đa kế thừa(nhiều)
        + Hierarchical inheritance : kế thừa phân cấp, thứ bậc
        + Multilevel inheritance : kế thừa đa cấp
        + Hybrid inheritance : kế thừa lai


    Base class:  (child class) lớp cha
    Driver class: (parent class) lớp con

    ! C++ Single Inheritance: Tính kế thừa đơn
    ( Single inheritance is defined as the inheritance in which a derived class is inherited from the only one base class.)

    ! C++ Multilevel Inheritance : Tính kế thừa đa cấp
    ( Multilevel inheritance is a process of deriving a class from another derived class. )

    ! C++ Multiple inheritance : kế thừa nhiều.

    ! C++ Hybrid Inheritance : Tính kế thừa lai
    ( Hybrid inheritance is a combination of more than one type of inheritance.)

    ! C++ Hierarchical inheritance : kế thừa phân cấp, thứ bậc.
    (Hierarchical inheritance is defined as the process of deriving more than one class from a base class.)


*/

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




// ! C++ Multilevel Inheritance: Tính kế thừa nhiều.
#include <iostream>  
using namespace std;  

class Animal {  
    public:  
        void eat() {   
            cout<<"Eating..."<<endl;   
        }    
};  

class Dog : public Animal   
{    
    public:  
        void bark(){  
            cout<<"Barking..."<<endl;   
        }    
}; 

class BabyDog : public Dog   
{    
    public:  
        void weep() {  
            cout<<"Weeping...";   
        }    
};   

int main(void) {  
    BabyDog d1;  
    d1.eat();  
    d1.bark();  
    d1.weep();  
    return 0;  
}  





// ! C++ Multiple Inheritance: Tính kế thừa nhiều.
/*
    syntax: 
            class D : visibility B-1, visibility B-2
            {  
                Body of the class;  
            }   
*/
#include <iostream>  
using namespace std;  

class A  // base class A
{  
    protected:  
        int a;  
    public:  
        void get_a(int n)  
        {  
            this->a = n;  
        }  
        void display() {
            cout << "Hoang Anh Tien" << endl;
        }
};  
  
class B  // base class B
{  
    protected:  
        int b;  
    public:  
        void get_b(int n)  
        {  
            this->b = n;  
        }  
        void display() {
            cout << "Tien Dep Trai!!!" << endl;
        }
};  

class C : public A, public B  
{  
    public:  
    void display()  
    {  
        cout << "The value of a is : " << a << std::endl;  
        cout << "The value of b is : " << b << std::endl;  
        cout<<"Addition of a and b is : "<< a + b << endl;
    }  
    void view() {
        A::display(); // Calling the display() function of class A.  
        B::display(); // Calling the display() function of class B.  
    }
};  
int main()  
{  
    C c;  
    c.get_a(10);  
    c.get_b(20);  
    c.display();  
    
    c.view();

    return 0;  
}  






// ! C++ Hybrid Inheritance : Tính kế thừa lai. (hay multilever inheritance + single inheritance )
#include <iostream>  
using namespace std;  

class A  // base class A
{  
    protected:  
        int a;  
    public:  
        void get_a()  
        {  
        std::cout << "Enter the value of 'a' : " << std::endl;  
        cin>>a;  
        }  
};  
  
class B : public A   // class B kế thừa của class A
{  
    protected:  
        int b;  
    public:  
        void get_b()  
        {  
            std::cout << "Enter the value of 'b' : " << std::endl;  
            cin>>b;  
        }  
};  

class C   // base class C
{  
    protected:  
        int c;  
    public:  
        void get_c()  
        {  
            std::cout << "Enter the value of c is : " << std::endl;  
            cin >> c;  
        }  
};  
  
class D : public B, public C  // vì bản thân class B đã kế thừa từ class A 
{  
    protected:  
        int d;  
    public:  
        void mul()  
        {  
            get_a();  
            get_b();  
            get_c();  
            std::cout << "Multiplication of a,b,c is : " << a * b * c << std::endl;  
        }  
};  

int main()  
{  
    D d;  
    d.mul();  
    return 0;  
} 





// ! C++ Hierarchial Inheritance: Tính kế thừa phân cấp, thứ bậc.
/*
class A  
{  
     body of the class A.  
}    
class B : public A   
{  
     body of class B.  
}  
class C : public A  
{  
     body of class C.  
}   
class D : public A  
{  
     body of class D.  
}   
*/
#include <iostream>  
using namespace std;  
class Shape                 // Declaration of base class.  
{  
    public:  
    int a;  
    int b;  
    void get_data(int n,int m)  
    {  
        a = n;  
        b = m;  
    }  
};  

class Rectangle : public Shape  // inheriting Shape class  
{  
    public:  
    int rect_area()  
    {  
        int result = a*b;  
        return result;  
    }  
};  

class Triangle : public Shape    // inheriting Shape class  
{  
    public:  
    int triangle_area()  
    {  
        float result = 0.5*a*b;  
        return result;  
    }  
};  

int main()  
{  
    Rectangle r;  
    Triangle t;  
    int length, breadth, base, height;  
    std::cout << "Enter the length and breadth of a rectangle: " << std::endl;  
    cin>>length>>breadth;  
    r.get_data(length,breadth);  
    int m = r.rect_area();  
    std::cout << "Area of the rectangle is : " <<m<< std::endl;  
    std::cout << "Enter the base and height of the triangle: " << std::endl;  
    cin>>base>>height;  
    t.get_data(base,height);  
    float n = t.triangle_area();  
    std::cout <<"Area of the triangle is : "  << n<<std::endl;  
    return 0;  
}  





