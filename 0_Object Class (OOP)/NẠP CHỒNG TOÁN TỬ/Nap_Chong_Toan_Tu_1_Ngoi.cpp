
//!  nạp chồng toán tử một ngôi trong C++
/*
    *Nạp chồng toán tử một ngôi trong C++:
        Toán tử một ngôi (unary) trong C++ hoạt động trên một toán hạng đơn và 
        dưới đây là một số ví dụ về toán tử một ngôi:


        Example:
            Nạp chồng toán tử tăng (++) và toán tử giảm (--) trong C++.

            Toán tử một ngôi (-) trong C++

            Toán tử logic phủ định (!) trong C++

*/

#include <iostream>
using namespace std;
 
class KhoangCach
{
private:
    int met;
    int centimet;
public:
    // khai bao cac constructor
    KhoangCach() {
        met = 0;
        centimet = 0;
    }
    KhoangCach(int met, int centimet) {
        this->met = met;
        this->centimet = centimet;
    }
    // ~KhoangCach(int met, int centimet) {
    //     this->met = met;
    //     this->centimet = centimet;
    // }
    // phuong thuc de hien thi khoang cach
    void hienthiKC()
    {
        cout << "Khoang cach bang m la: " << met << endl;
        cout << "Khoang cach bang cm la: " << centimet << endl;
    }
    // nap chong toan tu (-)
    KhoangCach operator- ()
    {
        met = -met;
        centimet = -centimet;
        return KhoangCach(met, centimet);
    }
};
 
int main()
{
    KhoangCach K1(10, 50), K2(-12, 15);
    -K1;               // ap dung su phu dinh
    K1.hienthiKC();    // hien thi K1
    -K2;               // ap dung su phu dinh
    K2.hienthiKC();    // hien thi K2

    KhoangCach obj1;

    obj1 = -K1 - K2;

    obj1.hienthiKC();


    return 0;
}