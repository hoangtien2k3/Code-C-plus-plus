
#include<iostream>
#include<string>
#include<cmath>
#include<stdlib.h>



int main() {

    // string str, str1, str2;
    // cout << "Nhap vao chuoi ky tu: ";

    // cin >> str >> str1 >> str2;
    // cout << "Chuoi ky tu vua nhap: " << str << " " << str1 << " " << str2;


    int tuoi;
    std::cout << "Nhap vao tuoi: ";
    std::cin >> tuoi;
    std::string str;
    std::cout << "Nhap vao chuoi: ";

    // fflush(stdin); // xóa gộ nhớ đệm trong C
    std::cin.ignore();
    std::getline(std::cin, str);
    std::cout << tuoi << "\t";
    std::cout << str;

    

    return 0;
}