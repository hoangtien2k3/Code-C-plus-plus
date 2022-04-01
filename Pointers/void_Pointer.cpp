
// C++ Void Pointer

/*
    + Con trỏ void là một con trỏ có mục đích chung có thể chứa địa chỉ của bất kỳ kiểu 
    dữ liệu nào, nhưng nó không được liên kết với bất kỳ kiểu dữ liệu nào.

    // Error
    int *ptr;  
    float f=10.3;  
    ptr = &f; // error  


    // successfull
    void *ptr;
    int *ptr1;
    int a = 9;
    ptr = &a; 
    ptr1 = (int*)ptr;


*/


#include <iostream>  
using namespace std;  
int main()  
{  
    void *ptr; // void pointer declaration  
    int *ptr1; // integer pointer declaration
    int data=10; // integer variable initialization  

    ptr=&data;  // storing the address of data variable in void pointer variable  
    ptr1 = (int*)ptr; // assigning void pointer to integer pointer  
    std::cout << "The value of *ptr1 is : " << *ptr1 << std::endl;  


    return 0;  
}  