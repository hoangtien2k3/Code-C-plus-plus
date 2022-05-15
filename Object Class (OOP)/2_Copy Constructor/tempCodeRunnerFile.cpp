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