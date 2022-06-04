
/*
    Đề bài:

    Xây dựng lớp Phanso gồm:

    Thuộc Tính: tuso, mauso.
    Phương thức:
        Hàm Khởi Tạo Không Tham Số, Hàm Hủy
        Nhập , Xuất
        Cong(), Tru(), Nhan(), Chia()
        Tính Tổng, Hiệu, Tích, Thương 2 phân số obj1 và obj2 rồi in kết quả ra màn hình


*/
#include<iostream>
#include<cmath>
#include<string>
using namespace std;

class phanso {
    private:
        int tuso;
        int mauso;
    public:
        phanso() { // constructor khoi tao
            tuso = 0;
            mauso = 1;
        }
        ~phanso() { // constructor huy
            tuso = 0;
            mauso = 1;
        }

        void input() {
            cout << "Nhap vao tuso: "; cin >> this->tuso;
            cout << "Nhap vao mauso: "; cin >> this->mauso;
        }

        void display() {
            cout << this->tuso << "/" << this->mauso << endl;
        }

        phanso cong(phanso obj1, phanso obj2) {
            phanso obj3;
            obj3.tuso = obj1.tuso * obj2.mauso + obj1.mauso * obj2.tuso;
            obj3.mauso = obj1.mauso * obj2.mauso;
            return obj3;
        }

        phanso  tru(phanso obj1, phanso obj2) {
            phanso obj3;
            obj3.tuso = obj1.tuso * obj2.mauso - obj2.tuso * obj1.mauso;
            obj3.mauso = obj1.mauso * obj2.mauso;
            return obj3;
        }

        phanso nhan(phanso obj1, phanso obj2) {
            phanso obj3;
            obj3.tuso = obj1.tuso * obj2.tuso;
            obj3.mauso = obj1.mauso * obj2.mauso;
            return obj3;
        }

        phanso chia(phanso obj1, phanso obj2) {
            phanso obj3;
            obj3.tuso = obj1.tuso * obj2.mauso;
            obj3.mauso = obj1.mauso * obj2.tuso;
            return obj3;
        }
};


int main() {

    phanso obj1, obj2, obj3;

    obj1.input();
    obj2.input();

    obj3 = obj3.cong(obj1, obj2);
    obj3.display();

    obj3 = obj3.tru(obj1, obj2);
    obj3.display();

    obj3 = obj3.nhan(obj1, obj2);
    obj3.display();

    obj3 = obj3.chia(obj1, obj2);
    obj3.display();

    return 0;
}