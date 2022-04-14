
// #include<iostream>
// #include<cmath>
//! // in ra tất cả các tập con từ tập {5, 7, 3, 2}

// int main() {
//     int arr[] = {5, 7, 3, 2};
//     for (int i=0; i<(1 << 4); i++) { // duyệt từ 0 -> 2^4 = 16 vì có 4 phần tử
//         std::cout << "{ ";
//         for (int j = 0; j<4; j++) {
//             if (i & (1 << j)) {
//                 std::cout << arr[j] << " ";
//             }
//         }
//         std::cout << "}" << std::endl;
//     }
// }



//! Cách 3: dùng Bitwise chuyển từ thập phân sang nhị phân
#include<stdio.h>
#include<math.h>
#include<conio.h>

void Dec2Bin(int decimalNumber) {
    for (int i=31; i>=0; i--) {
        if (decimalNumber & (1 << i))
            printf ("1");
        else 
            printf ("0");
    }
}

int main() {
    int decimalNumber;
    printf ("Nhap vao decimalNumber = "); scanf ("%d", &decimalNumber);
    Dec2Bin(decimalNumber);
}

