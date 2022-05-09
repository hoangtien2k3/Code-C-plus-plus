
/*  C++ string substr() : It creates a new string object of n characters.

    substr() : hàm này dùng để cắ chuỗi


    Syntax: string s1
                s1.substr(vị trí bắt đầu);

                s1.substr(vị trí bắt đầu, số phần tử cần lấy);


*/
#include<iostream>
#include<string>
using namespace std;

int main() {
    string a = "abcdef";

    string b = a.substr(2, 3);

    cout << b << endl;

    return 0;
}