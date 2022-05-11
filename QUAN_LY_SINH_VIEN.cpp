
/*  Bài tập quản lý sinh viên trong C++ : HOÀNG ANH TIẾN

    Đề bài: 
        Viết chương trình quản lý sinh viên trong C++. 
        Mỗi đối tượng sinh viên có các thuộc tính sau:
        id, tên, giới tính, tuổi, điểm toán, điểm lý, điểm hóa, điểm trung bình và học lực.

    Học lực được tính như sau:
        Điểm trung bình là giá trị trung bình của 3 môn toán, lý và hóa.
        Giỏi: diemTB >= 8.
        Khá: 6.5 <= diemTB < 8.
        Trung Bình: 5 <= diemTB < 6.5.
        Yếu: diemTB < 5.

    Yêu cầu: tạo ra một menu với các chức năng sau:
        1. Thêm sinh viên.
        2. Cập nhật thông tin sinh viên bởi ID.
        3. Xóa sinh viên bởi ID.
        4. Tìm kiếm sinh viên theo tên.
        5. Sắp xếp sinh viên theo điểm trung bình (GPA).
        6. Sắp xếp sinh viên theo tên.
        7. Hiển thị danh sách sinh vien.
        8. Ghi danh sách sinh viên vào file "student.txt" .

*/

#include<iostream>
#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;

typedef struct SinhVien {
    int id;
    string name;
    string gioitinh;
    int tuoi;
    float diemtoan;
    float diemly;
    float diemhoa;
    float diemTB;
    string hocluc; // học lực của sinh viên.
}SinhVien;



// in ra các ký tự "_"
void printLine(int n) { 
    cout << endl;
    for (int i = 0; i < n; i++) {
        cout << "_";
    }
    cout << endl;
}


// tìm id lớn nhất
int idLonNhat (SinhVien a[], int n) { 
    int idMax = 0;
    if (n > 0) {
        idMax = arr[0].id;
        for(int i = 0; i < n; i++) {
            if (arr[i].id > idMax) {
                idMax = arr[i].id;
            }
        }
    }
    return idMax;
}

void diemTB(SinhVien &sv) {
    sv.diemTB = (sv.diemtoan + sv.diemly + sv.diemhoa) / 3;
}

void xeploai(SinhVien &sv) {
    if (sv.diemTB >= 8) {
        strcpy(sv.hocluc, "Gioi");
    } else if (sv.diemTB >= 6.5) {
        strcpy(sv.hocluc, "Kha");
    } else if (sv.diemTB >= 5) {
        strcpy(sv.hocluc, "Trung Binh")
    } else {
        strcpy(sv.hocluc, "Yeu");
    }
}

void NhapThongTinSinhVien(SinhVien &sv, int id) {
    cout << "Nhap ten: "; cin.ignore(); getline(cin, sv.name);
    cout << "Nhap gioi tinh: "; getline(cin, sv.gioitinh);
    cout << "Nhap tuoi: "; cin >> sv.tuoi;
    cout << "Nhap diem Toan: "; cin >> sv.diemtoan;
    cout << "Nhap diem Ly: "; cin >> sv.diemly;
    cout << "Nhap diem Hoa: "; cin >> sv.diemhoa;

    sv.id = id;
    diemTB(sv);
    xeploai(sv);
}

void nhapSV(SV a[], int id, int n) {
    printLine(40);
    printf("\n Nhap sinh vien thu %d:", n + 1);
    NhapThongTinSinhVien(a[n], id);
    printLine(40);
}









int main() {






}