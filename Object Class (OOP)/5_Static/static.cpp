
/*  C++ Static: giống như biến toàn cục

    -   + Static trong c++ là dữ liệu của lớp không phải là dữ liệu của đối tượng. 
        + Static trong c++ tồn tại như một biến toàn cục. 
        + Hay nói cách khác dữ liệu static xuất hiện trước khi bạn khởi tạo đối tượng của lớp, 
          và nó chỉ tồn tại duy nhất.

    - Các thành viên static có thể là public, private hoặc protected.

    - Static ngoài khai báo biến còn có thể khai báo hàm.



    Đối với class, static dùng để khai báo thành viên dữ liệu dùng chung cho mọi thể hiện của lớp:

        + Một bản duy nhất tồn tại trong suốt quá trình chạy của chương trình.
        + Dùng chung cho tất cả các thể hiện của lớp.
        + Bất kể lớp đó có bao nhiêu thể hiện.

*/

#include <iostream>  
using namespace std;  
class Account {  
    public:  
        int accno; //data member (also instance variable)      
        string name; //data member(also instance variable)  
        static float rateOfInterest;   
        Account(int accno, string name)   // constructor có tham số
        {    
            this->accno = accno;    
            this->name = name;    
        }    
        void display()    
        {    
            cout << accno << " " << name << " " << rateOfInterest << endl;   
        }     
};  

float Account::rateOfInterest = 6.5; 

int main(void) {  
    Account a1 = Account(201, "Sanjay");  //creating an object of Employee   
    Account a2 = Account(2003, "HOANG ANH TIEN");

    a1.display(); 
    a2.display();   

    return 0;  
}  

