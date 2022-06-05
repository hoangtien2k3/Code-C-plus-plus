
// Data Abstraction : Trừu tượng hóa dữ liệu

#include <iostream>  
using namespace std;  
class Shape    
{    
    public:   
    virtual void draw() = 0;    // virtual: tính đa hình Polymorphism
};    
 class Rectangle : public Shape    
{    
    public:  
     void draw()    
    {    
        cout << "drawing rectangle..." <<endl;    
    }    
};    
class Circle : public Shape    
{    
    public:  
     void draw()    
    {    
        cout <<"drawing circle..." <<endl;    
    }    
};    
int main( ) {  
    Rectangle rec;  
    
    Circle cir;  
    rec.draw();    
    cir.draw();   



   return 0;  
}  