
/*  C++ Static: giống như biến toàn cục

    -   + Static trong c++ là dữ liệu của lớp không phải là dữ liệu của đối tượng. 
        + Static trong c++ tồn tại như một biến toàn cục. 
        + Hay nói cách khác dữ liệu static xuất hiện trước khi bạn khởi tạo đối tượng của lớp, 
        và nó chỉ tồn tại duy nhất.
        + Vùng nhớ của biến static chỉ được cấp pháp 1 lần và giá trị của biến trong những lần gọi 
        trước đó được lưu lại và thực hiện trong những lần gọi tiếp theo.



    - Các thành viên static có thể là public, private hoặc protected.

    - Static ngoài khai báo biến còn có thể khai báo hàm.

    ! LƯU Ý: các biến static không được coi như là thuộc tính của một lớp.


    Đối với class, static dùng để khai báo thành viên dữ liệu dùng chung cho mọi thể hiện của lớp:

        + Một bản duy nhất tồn tại trong suốt quá trình chạy của chương trình.
        + Dùng chung cho tất cả các thể hiện của lớp.
        + Bất kể lớp đó có bao nhiêu thể hiện.

*/

#include <iostream>  
using namespace std;  
class Account {  
    public:  
        int accno;    
        string name;

        static float rateOfInterest;   // khởi tạo một biến static

        Account(int accno, string name)   // constructor
        {    
            this->accno = accno;    
            this->name = name;    
        }    
        void display()    
        {    
            cout << accno << " " << name << " " << rateOfInterest << endl;   
        }     
};  

float Account::rateOfInterest = 6.5; // gán giá trị cho biến static 

int main(void) {  
    Account a1 = Account(201, "Sanjay");  
    Account a2 = Account(2003, "HOANG ANH TIEN");

    a1.display(); 
    a2.display();   

    return 0;  
}  






//! //////////
/*
Phương thức tĩnh:
    giống với biến tĩnh, phương thức tĩnh được khai báo với từ khóa static và được sử dụng mà không cần
    phải khởi tạo đối tượng.
*/
#include<iostream>
using namespace std;

class Math {
public:
    static int max(int a, int b) { // vì a và b đều là biến static mới làm được nhé
        return a > b ? a : b;
    }
    static int min(int a, int b) {
        return a < b ? a : b;
    }
};

int main() {
    cout << Math::max(2, 3) << endl;
    cout << Math::min(2, 3) << endl;
    return 0;
}

