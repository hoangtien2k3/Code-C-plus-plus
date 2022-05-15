
/*  C++ Copy Constructor:

    Copy constructor là một constructor mà tạo một đối tượng bằng việc khởi tạo nó với 
    một đối tượng của cùng lớp đó, mà đã được tạo trước đó. 

    Copy constructor được sử dụng để:
    Khởi tạo một đối tượng từ đối tượng khác với cùng kiểu.



    Syntax Of User-defined Copy Constructor:

                        Class_name(const class_name &old_object);  


    class ten_lop  
    {  
        ten_lop (const ten_lop &obj) {
             !phan than cua constructor
        } 
    }   

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