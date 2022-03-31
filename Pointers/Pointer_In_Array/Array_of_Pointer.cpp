
// Array of Poin: (An array of pointers) is an array that consists of variables of pointer type

// int *ptr[5];         // array of 5 integer pointer


#include <iostream>  
using namespace std;  

// int main()  
// {  
//     int ptr1[5]; // integer array declaration  
//     int *ptr2[5]; // integer array of pointer declaration  
//     std::cout << "Enter five numbers :" << std::endl;  
//     for(int i=0;i<5;i++)  
//     {  
//         std::cin >> ptr1[i];  
//     }  
//     for(int i=0;i<5;i++)  
//     {  
//         ptr2[i] = &ptr1[i];   // giá trị của con trỏ là địa chỉ của 1 biến khác
//     }  
//     std::cout << "The values are" << std::endl;  
//     for(int i=0;i<5;i++)  
//     {  
//         std::cout << *ptr2[i] << std::endl;  
//     }  
// }  


void Array_Pointer (int *arr) {
    for (size_t i = 0; i<9; i++) {
        std::cout << arr[i] << "\t";
    }
}

//  &arr[1] tương đương với (arr + 1) và arr[1] tương đương với *(arr + 1).

int main() {
    int brr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // Array_Pointer(brr);
    int *ptr = &brr[0]; // brr[0] tương đương với *arr (giá trị của một địa chỉ của con trỏ)
    for (size_t i=0; i<9; i++) {
        std::cout << *(ptr + i) << " "; // C1 // &arr[1] tương đương với (arr + 1) và arr[1] tương đương với *(arr + 1).
        std::cout << ptr[i] << " "; // C2
        std::cout << brr[i] << " "; // C3;
        std::cout << *&brr[i] << " "; // C4
        std::cout << *&ptr[i] << " "; // C5
    }

    /*
    &arr[1] tương đương với (arr + 1) và arr[1] tương đương với *(arr + 1).
    &arr[2] tương đương với (arr + 2) và arr[2] tương đương với *(arr + 2).
    &arr[3] tương đương với (arr + 3) và arr[3] tương đương với *(arr + 3).
    .
    .
    &arr[i] tương đương với (arr + i) và arr[i] tương đương với *(arr + i).
    */

    return 0;
}