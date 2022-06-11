
#include<iostream>
using namespace std;

class test {
    private:
        int a, b;
    public:
        test(int a, int b);
        friend istream& operator >> (istream& , test&);
        friend ostream& operator << (ostream& , test);
        int lcm();
};

test::test(int a, int b) {
    this->a = a;
    this->b = b;
}

istream& operator >> (istream& in, test &p1) {
    cout << "Nhap vao a, b: ";
    in >> p1.a >> p1.b;
    return  in;
}

ostream& operator << (ostream& out, test p1) {
    out << p1.a << " " << p1.b << endl;
    return out;
}

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(a % b, b);
}

int test::lcm() {
    int result = gcd(a, b);
    return a / result * b;
}

int main() {
    test p1(1, 1);
    cin >> p1;
    p1.lcm();
    cout << p1;

    return 0;
}