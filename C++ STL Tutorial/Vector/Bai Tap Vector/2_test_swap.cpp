
/*
    Nhập vào một dãy n số thực. Đưa ra dãy mới là dãy đảo ngược của dãy ban đầu

*/

#include<bits/stdc++.h>
#include<vector>

int main() {
    float n;
    std::cout << "Enter the size in list vector: ";
    std::cin >> n;

    std::vector<float> v1(n);

    for(int i=0; i < v1.size(); i++) {
        std::cout << "v1["<<i<<"] = ";
        std::cin >> v1[i];
    }


    for(int i = v1.size() - 1; i >= 0; i--) {
        std::cout << v1[i] << " ";
    }



    return 0;
}