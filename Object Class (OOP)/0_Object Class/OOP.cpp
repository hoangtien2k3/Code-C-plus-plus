
/*
    Class : lớp
    attribute : thuộc tính
    method, behavior : phương thức
    object : đối tương



    - Encaptulation: tính đống gói

    - Access modifier: 
            + Private
            + Public
            + protected


*/
#include<bits/stdc++.h>
using namespace std;

class SinhVien {
    private:
        string id, name;
        int age;
    public:
        void nhap();
        void xuat();
        friend void inthongtin(SinhVien);
};

void inthongtin(SinhVien a) {
    cout << a.id << " " << a.name << " " << a.age << endl;
}

void SinhVien::nhap() {
    cout << "Nhap age: "; cin >> age;
    cin.ignore();
    cout << "Nhap id: "; getline(cin, id);
    cout << "Nhap name: "; getline(cin, name);
}

void SinhVien::xuat() {
    cout << id << "\t" << name << "\t" << age << endl;
}


int main() {
    SinhVien sv;

    sv.nhap();
    inthongtin(sv);
    sv.xuat();

    return 0;
}










