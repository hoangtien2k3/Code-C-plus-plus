
/*
    advantage of Pointer in C++
    + Con trỏ làm giảm mã và cải thiện hiệu suất, nó được sử dụng để truy xuất các chuỗi, cây, v.v. 
    và được sử dụng với các mảng, cấu trúc và hàm

    + Chúng ta có thể trả về nhiều giá trị từ hàm bằng con trỏ.

    + Nó giúp bạn có thể truy cập vào bất kỳ vị trí bộ nhớ nào trong bộ nhớ của máy tính.

    - Con trỏ với mảng:
    + địa chỉ của của mảng cũng chính là địa chỉ của phần tử đầu tiên trong mảng : &arr == &arr[0]

    + Vd: *ptr = &arr[0]: nghĩa là con trỏ sẽ trỏ vào địa chỉ đầu tiên của mảng và dùng vòng lặp để 
        truy xuất ra các phần tử trong mảng
    + con trỏ mảng giá trị là địa chỉ của một biến khác



*/

#include <iostream>  
using namespace std;  
int main()  
{  
    int a=20,b=10,*p1=&a,*p2=&b;    
    cout<<"Before swap: *p1="<<*p1<<" *p2="<<*p2<<endl;    
    *p1=*p1+*p2;    
    *p2=*p1-*p2;    
    *p1=*p1-*p2;    
    cout<<"After swap: *p1="<<*p1<<" *p2="<<*p2<<endl;    
    return 0;  
}  