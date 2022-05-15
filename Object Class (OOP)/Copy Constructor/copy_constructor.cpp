
/*  C++ Copy Constructor:

    Copy constructor là một constructor mà tạo một đối tượng bằng việc khởi tạo nó với 
    một đối tượng của cùng lớp đó, mà đã được tạo trước đó. 

    Copy constructor được sử dụng để:
        Khởi tạo một đối tượng từ đối tượng khác với cùng kiểu.


    - COPY CONSTRUCTOR CÓ 2 LOẠI:
        + Default Copy Constructor:
        + User Defined constructor: The programmer defines the user-defined constructor.


    Syntax Of User-defined Copy Constructor:    

                        Class_name(const class_name &old_object);  

                        class ten_lop  
                        {  
                            ten_lop (const ten_lop &obj) {
                                / phan than cua constructor
                            } 
                        }   

    Two types of copies are produced by the constructor:
        + Shallow copy: sao chép nông
        + Deep copy : sao chép sâu

*/

#include <iostream>
using namespace std;

class Line
{
    public:
        int layChieuDai( void );
        Line( int dai );             // Day la mot constructor don gian
        Line( const Line &obj);      // Day la copy constructor
        ~Line();                     // Day la destructor

    private:
        int *contro;  
};

// Phan dinh nghia cac ham thanh vien, bao gom constructor, copy constructor, destructor
Line::Line(int dai)
{
    cout << "Constructor: cap phat bo nho cho con tro contro" << endl;
    // cap phat bo nho cho con tro
    contro = new int;
    *contro = dai;
}

Line::Line(const Line &obj)
{
    cout << "Copy constructor: cap phat bo nho cho con tro contro" << endl;
    contro = new int;
   *contro = *obj.contro; // sao chep gia tri
}

Line::~Line(void)
{
    cout << "Giai phong bo nho!" << endl;
    delete contro;
}

int Line::layChieuDai( void )
{
    return *contro;
}

void hienThi(Line obj)
{
    cout << "Chieu dai cua line la: " << obj.layChieuDai() <<endl;
}

// ham main cua chuong trinh
int main( )
{
    Line line(50);

    hienThi(line);

    return 0;
}












//! ////////////////////////////////
// Shallow Copy
#include<bits/stdc++.h>
using namespace std;

class Demo {
    public:
        int a, b;
        int *p;
    public:
        Demo() {
            p = new int;
        }
        void setdata(int, int, int);
        void showdata();

};

void Demo::setdata(int x, int y, int z) {
    a = x;
    b = y;
    *p = z;
}

void Demo::showdata() {
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << *p << endl;
}


int main() {
    Demo d1;
    d1.setdata(12, 04, 2003);

    Demo d2;
    d2 = d1;
    
    d2.showdata();


    return 0;
}






//! /////////////////////////////
// Deep copy
#include<bits/stdc++.h>
using namespace std;

class Demo {
    public:
        int a, b;
        int *p;
    public:
        Demo() {
            p = new int;
        }
        Demo(Demo &d) {
            a = d.a;
            b = d.b;
            p = new int;
            *p = *(d.p);
        }
        void setdata();
        void showdata();
};

void Demo::setdata(int a, int b, int p) {
    this->a = a;
    this->b = b;
    this->*p = p;
}

void Demo::showdate() {
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "p = " << *p << endl;
}

int main() {
    Demo d1;
    d1.setdata(12, 04, 2003);
    Demo d2 = d1;
    d2.showdata();

    return 0
}