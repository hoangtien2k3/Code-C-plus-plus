#include<iostream>

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

        Box operator+ (const Box& b) {
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