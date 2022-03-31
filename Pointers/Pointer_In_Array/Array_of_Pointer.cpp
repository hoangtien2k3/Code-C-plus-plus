
// Array of Poin: (An array of pointers) is an array that consists of variables of pointer type

// int *ptr[5];         // array of 5 integer pointer



#include <iostream>  
using namespace std;  
int main()  
{  
    int ptr1[5]; // integer array declaration  
    int *ptr2[5]; // integer array of pointer declaration  
    std::cout << "Enter five numbers :" << std::endl;  
    for(int i=0;i<5;i++)  
    {  
        std::cin >> ptr1[i];  
    }  
    for(int i=0;i<5;i++)  
    {  
        ptr2[i] = &ptr1[i];   // giá trị của con trỏ là địa chỉ của 1 biến khác
    }  
    std::cout << "The values are" << std::endl;  
    for(int i=0;i<5;i++)  
    {  
        std::cout << *ptr2[i] << std::endl;  
    }  
}  



// void Array (int *ptr) {
//     for (int i=0; i<5; i++) {
//         std::cout << ptr[i] << std::endl;
//     }
// }


// int main() {
//     int arr[5];
//     int *ptr = &arr[0];
//     for (int i=0; i<5; i++) {
//         std::cin >> arr[i];
//     }

//     // Array(arr);
//     for (int i=0;i<5;i++) {
//         std::cout << *ptr << std::endl;
//         ptr++;
//     }
// }