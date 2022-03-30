
/*
    advantage of Pointer in C++
    + Con trỏ làm giảm mã và cải thiện hiệu suất, nó được sử dụng để truy xuất các chuỗi, cây, v.v. 
    và được sử dụng với các mảng, cấu trúc và hàm

    + Chúng ta có thể trả về nhiều giá trị từ hàm bằng con trỏ.

    + Nó giúp bạn có thể truy cập vào bất kỳ vị trí bộ nhớ nào trong bộ nhớ của máy tính.



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