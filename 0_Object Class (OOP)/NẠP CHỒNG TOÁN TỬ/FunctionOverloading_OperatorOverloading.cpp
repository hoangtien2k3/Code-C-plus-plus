
//!  Nạp Chồng Toán Tử và Nạp Chồng Hàm Trong C++

/*  
    ! Nạp chồng hàm trong C++: 
    Bạn có thể có nhiều định nghĩa cho cùng tên hàm trong cùng phạm vi. 
    Định nghĩa của hàm phải khác lẫn nhau về kiểu và/hoặc số tham số trong 
    danh sách tham số. Bạn không thể nạp chồng các khai báo hàm mà chỉ khác 
    nhau ở kiểu trả về.

*/

#include <iostream>
using namespace std;
 
class inDuLieu
{
public:
    void hamIn(int i) {
        cout << "In so nguyen: " << i << endl;
    } 
    void hamIn(double  f) {
        cout << "In so thuc: " << f << endl;
    }     
    void hamIn(char* c) {
        cout << "In ky tu: " << c << endl;
    }
};
 
int main(void)
{
    inDuLieu idl;
 
    // Goi ham hamIn de in so nguyen
    idl.hamIn(12345);
    // Goi ham hamIn de in so thuc
    idl.hamIn(6677.02);
    // Goi ham hamIn de in ky tu
    idl.hamIn("Hoc C++ co ban va nang cao.");
 
    return 0;
}




/*
    ! Nạp chồng toán tử trong C++
    - Bạn có thể định nghĩa lại hoặc nạp chồng hầu hết các toán tử có sẵn trong C++. 
    Vì thế, một lập trình viên có thể sử dụng các toán tử với kiểu tự định nghĩa (user-defined).

    - Nạp chồng toán tử trong C++ là các hàm với tên đặc biệt: Tên hàm là từ khóa operator 
    theo sau là ký hiệu của toán tử đang được định nghĩa. Giống như bất kỳ hàm khác, một 
    toán tử nạp chồng có một kiểu trả về và một danh sách tham số.

    *Syntax:

        *   + name_class operator+(const name_class & name);

        *   + name_class operator+(const name &, const name &);

*/

#include<iostream>
#include<cmath>

using namespace std;

class Box {
    private:
        float chieudai;
        float chieurong;
        float chieucao;
    public:
        double tinhTheTich() {
            return chieudai * chieurong * chieucao;
        }

        void input() {
            cout << "Nhap vao chieudai: "; cin >> chieudai;
            cout << "Nhap vao chieurong: "; cin >> chieurong;
            cout << "Nhap vao chieucao: "; cin >> chieucao;
        }

        Box operator+ (const Box &b) {
            Box box;
            box.chieudai = this->chieudai + b.chieudai;
            box.chieurong = this->chieurong + b.chieurong;
            box.chieucao = this->chieucao + b.chieucao;
            return box;
        }
};


int main() {
    Box box1, box2, box3;

    double thetich = 0.0;

    box1.input();
    box2.input();

    thetich = box1.tinhTheTich();
    cout << "The Tich Box1: " << thetich << endl;

    thetich = box2.tinhTheTich();
    cout << "The tich Box2: " << thetich << endl;

    box3 = box1 + box2;
    thetich = box3.tinhTheTich();
    cout << "The Tich Box3: " << thetich << endl;


    return 0;
}










