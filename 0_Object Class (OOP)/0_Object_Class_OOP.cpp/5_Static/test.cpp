
#include<iostream>
using namespace std;

// class Math {
// public:
//     static int max(int a, int b) { // vì a và b đều là biến static mới làm được nhé
//         return a > b ? a : b;
//     }
//     static int min(int a, int b) {
//         return a < b ? a : b;
//     }
// };

class Math {
public:
    static double pi;
    static double getpi() {
        return pi;
    }
};

double Math::pi = 3.14;

int main() {
    cout << Math::getpi() << endl;
    return 0;
}