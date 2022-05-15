
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
        // SinhVien(string, string, int);
        void nhap();
        void xuat();
        // ~SinhVien();
};


// SinhVien::SinhVien(string id, string name, int age) {
//     cout  << "Ham Khoi tao co tham so! " << endl;
//     this->id = id;
//     this->name = name;
//     this->age = age;
// }

// SinhVien::~SinhVien() {
//     cout << "Huy constructor tai day!";
// }

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
    SinhVien sv[10];
    int n; cin >> n;
    for(int i=0; i<n; i++) {
        sv[i].nhap();
    }
    for(int i=0; i<n; i++) {
        sv[i].xuat();
    }







    return 0;
}










