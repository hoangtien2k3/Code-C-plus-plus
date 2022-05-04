
/*
    Nhâp vào một dãy n số nguyên. Đưa ra dãy số toàn số chẵn


*/

#include<iostream>
#include<cmath>
#include<vector>


int main() {
    int n;
    std::cout << "Enter the size of list n = ";
    std::cin >> n;

    std::vector<int> v(n);

    for(int i=0; i<v.size(); i++) {
        std::cout << "v["<<i<<"] = ";
        std::cin >> v[i];
    }

    std::cout << "Elements Even in list vector: ";
    for(int i=0; i<v.size(); i++) {
        if (!(v[i] % 2)) {
            std::cout << v[i] << " ";
        }
    }

    return 0;
}