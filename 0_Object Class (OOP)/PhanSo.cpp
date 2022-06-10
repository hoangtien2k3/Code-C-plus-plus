// Rút Gọn Phân Số OOP

#include<bits/stdc++.h>
using namespace std;

using ll = long long;

ll gcd(ll a, ll b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

class PhanSo {
    private:
        ll tu, mau;
    public:
        PhanSo(ll tu, ll mau);
        friend istream& operator >> (istream&, PhanSo&);
        friend ostream& operator << (ostream&, PhanSo);
        void rutgon();
};

PhanSo::PhanSo(ll tu, ll mau) {
    this->tu = tu;
    this->mau = mau;
}

istream& operator >> (istream& in, PhanSo &a) {
    cout << "Nhap vao tuso: ";
    in >> a.tu;
    cout << "Nhap vao mauso: ";
    in >> a.mau;
    return in;
}

ostream& operator << (ostream& out, PhanSo a) {
    out << "Phan So Rut Gon: " <<  a.tu << "/" << a.mau << endl;
    return out;
}

void PhanSo::rutgon() {
    ll g = gcd(tu, mau);
    tu /= g;
    mau /= g;
}


int main() {
    PhanSo p(1, 1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}