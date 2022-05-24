
/*  Inheritance: ( Tính kế thừa )

    Tính kế thừa là một quá trình trong đó đối tượng sẽ tự động kế thừa tất cả các thuộc tính và hành vi
    của đối tượng cha mẹ của nó. 

    Vì thế có thể dễ dàng sử đổi và mở rộng các thuộc tính trong lớp class


    Types Of Inheritance:

        + Single inheritance
        + Multiple inheritance
        + Hierarchical inheritance
        + Multilevel inheritance
        + Hybrid inheritance



*/

#include <iostream>  
using namespace std;  
    class Account {  
        public:  
        float salary = 60000;   
};  

class Programmer: public Account {  
    public:  
        float bonus = 5000;    
};   

int main(void) {  
    Programmer p1;  
    cout<<"Salary: "<<p1.salary<<endl;    
    cout<<"Bonus: "<<p1.bonus<<endl;    
    return 0;  
}  