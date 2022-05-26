
/*


*/
//! ////////////////////////////////
// C++ Struct Example
#include <iostream>    
using namespace std; 

struct Rectangle      
{      
   int width, height;      
}; 

int main(void) {    
    struct Rectangle rec;    
    rec.width=8;    
    rec.height=5;    
    cout<<"Area of Rectangle is: "<<(rec.width * rec.height)<<endl;    
    return 0;    
}    





//! ///////////////////////////
// C++ Struct Example: Using Constructor and Method

#include <iostream>    
using namespace std;   

struct Rectangle {      
    int width, height;      
    Rectangle(int w, int h)      
    {      
        width = w;      
        height = h;      
    }      
    void areaOfRectangle() {       
        cout<<"Area of Rectangle is: "<< (width*height); 
    }      
};      

int main(void) {    
    struct Rectangle rec = Rectangle(4,6);    
    rec.areaOfRectangle();    
    return 0;    
}    