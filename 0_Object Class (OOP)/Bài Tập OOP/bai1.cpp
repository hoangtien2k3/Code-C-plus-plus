
// Bài 1. Khai báo lớp phân số.

#include<bits/stdc++.h>
#include<iostream>
#include<cmath>
#include<string>

using namespace std;

class PhanSo {
    private:
        long long tuso, mauso;
    public:
        PhanSo(long long, long long);
        friend istream& operator >> (istream& in, PhanSo &);
        friend ostream& operator << (ostream& out, PhanSo);
        void rutgon();
};

PhanSo::PhanSo(long long tuso, long long mauso) {
    this->tuso = tuso;
    this->mauso = mauso;
}

istream& operator >> (istream& in, PhanSo &a) {
    in >> a.tuso >> a.mauso;
    return in;
}

ostream& operator << (ostream& out, PhanSo a) {
    out << a.tuso << "/" << a.mauso << endl;
    return out;
}

long long gcd(long long tuso, long long mauso) {
    if (tuso == 0) return mauso;
    return gcd(mauso % tuso, tuso);
}

void PhanSo::rutgon() {
    this->tuso /= gcd(tuso, mauso);
    this->mauso /= gcd(tuso, mauso);
}

int main() {
    PhanSo p(1,1);
    cin >> p;
    p.rutgon();
    cout << p;
    return 0;
}





// #include<bits/stdc++.h>
// using namespace std;

// using ll = long long;

// class PhanSo {
//     private:
//         ll tu, mau;
//     public:
//         PhanSo(ll tu, ll mau);
//         friend istream& operator >> (istream&, PhanSo&);
//         friend ostream& operator << (ostream&, PhanSo);
//         void rutgon();
// };

// PhanSo::PhanSo(ll tu, ll mau) {
//     this->tu = tu;
//     this->mau = mau;
// }

// istream& operator >> (istream& in, PhanSo &a) {
//     in >> a.tu >> a.mau;
//     return in;
// }

// ostream& operator << (ostream& out, PhanSo a) {
//     out << a.tu << "/" << a.mau << endl;
//     return out;
// }

// ll gcd(ll a, ll b) {
//     if (b == 0) return a;
//     return gcd(b, a % b);
// }

// void PhanSo::rutgon() {
//     ll g = gcd(tu, mau);
//     tu /= g;
//     mau /= g;
// }

// int main() {
//     PhanSo p(1,1);
//     cin >> p;
//     p.rutgon();
//     cout << p;
//     return 0;
// }





