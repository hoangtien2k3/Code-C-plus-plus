

// ! Runtime Polymorphism: dùng với virtual
#include<iostream>
#include<cmath>
using namespace std;

class Mayvitinh{  
	public: 	 	 	
        virtual void display(){ //* dùng virtual trong C++ 
            cout << "mayvitinh" << endl;
        }
}; 

class mayAcer : public Mayvitinh {
    public:
        void display() {
            cout << "mayAcer!" << endl;
        }
};

int main() {
    mayAcer p1;

    Mayvitinh *tenmay = &p1;
    tenmay->display();

    return 0;
}

























