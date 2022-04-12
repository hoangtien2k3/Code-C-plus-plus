
#include<iostream>
#include<cmath>


int main() {
    int arr[] = {5, 7, 3, 2};
    for (int i=0; i<(1 << 4); i++) { // duyệt từ 0 -> 2^4 = 16 vì có 4 phần tử
        std::cout << "{ ";
        for (int j = 0; j<4; j++) {
            if (i & (1 << j)) {
                std::cout << arr[j] << " ";
            }
        }
        std::cout << "}" << std::endl;
    }
}