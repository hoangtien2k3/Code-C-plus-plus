
/*  C++ Destructor: hay còn được gọi là hàm hủy

    +   Một hàm hủy hoạt động ngược lại với hàm tạo; nó hủy các đối tượng của các lớp. 
        Nó chỉ có thể được định nghĩa một lần trong một lớp. 
        Giống như các hàm tạo, nó được gọi tự động.

    +   ~ Destructor



*/

#include <iostream>  
using namespace std;  
class Employee  
{  
    public:  
        Employee()    
        {    
            cout<<"Constructor Invoked"<<endl;    
        }    
        ~Employee()    
        {    
            cout<<"Destructor Invoked"<<endl;    
        }  
};  

int main(void)   
{  
    Employee e1; // creating an object of Employee // nó sẽ tự động goi cả hàm tạo và hàm hủy Constructor   

    return 0;  
}  