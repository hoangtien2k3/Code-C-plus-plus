

// nạp chồng toán tử cho toán tử nhập xuất trong C++.

#include<iostream>
#include<cmath>
#include<string>
using namespace std;

class PhanSo {
    public: 
        float tu;
        float mau;
    public:
        friend istream &operator >> (istream &, PhanSo &); // overload input
        friend ostream &operator << (ostream &, PhanSo &); // overload output

};

istream &operator >> (istream &input, PhanSo &ps) {
    cout << "Nhap vao tu, mau: "; 
    input >> ps.tu >> ps.mau;
    return input;
}

ostream &operator << (ostream &output, PhanSo &ps) {
    if (ps.tu == 0) {
        output << 0;
    }
    else if (ps.mau == 1) {
        output << ps.tu;
    } else {
        output << ps.tu << "/" << ps.mau << endl;
    }
    return output;
}

int main() {
    PhanSo p, p1, p2;

    cin >> p1;
    cin >> p2;

    cout << "Phan so thu 1: " << p1 << endl;
    cout << "Phan so thu 2: " << p2 << endl;

    return 0;
}