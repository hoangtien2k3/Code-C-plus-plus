
/*
    ! Virtual Function: Hàm ảo
    - Hàm ảo (virtual function) là một hàm thành viên trong Cha(base class) mà lớp Con(Driver class) 
    khi kế thừa cần phải định nghĩa lại.


    - Hàm ảo được sử dụng trong lớp Cha(base class) khi cần đảm bảo hàm ảo đó sẽ được định nghĩa lại trong lớp 
    Con(driver class). Việc này rất cần thiết trong trường hợp con trỏ có kiểu là lớp Cha(base) trỏ đến đối tượng 
    của lớp Con(Driver class).


    - Hàm ảo chỉ khác hàm thành phần thông thường khi được gọi từ một con trỏ. Sử dụng hàm ảo khi muốn con trỏ 
    đang trỏ tới đối tượng của lớp nào thì hàm thành phần của lớp đó sẽ được gọi mà không xem xét đến kiểu của con trỏ.


    ! Chú ý:

    - Còn một điều đáng chú ý nữa, hàm ảo này có thể không được định nghĩa trong lớp cơ sở mà chỉ được khai báo thôi! 
    ! VD: virtual void setsun(int i) = 0. Lúc này chúng ta gọi nó là “hàm ảo thuần tuý” hay "hàm thuần ảo"


*/

#include <iostream>
#include <string>
using namespace std;

class Animal{
private:
	string type;
public:
    Animal(){
		type = "Animal";
	}
    virtual string getType(){
        return type;
    }
};

class Dog : public Animal{
private:
	string type;
public:
    Dog(){
		type = "Dog";
	}
    string getType(){
        return type;
    }
};

class Cat : public Animal{
private:
	string type;
public:
    Cat(){
		type = "Cat";
	}
    string getType(){
        return type;
    }
};

void print(Animal* ani) {
    cout << "Animal: " << ani->getType() << endl;
}

void main(){
    Animal *animal1 = new Animal();
    Animal *dog1 = new Dog();
    Animal *cat1 = new Cat();

    print(animal1);
    print(dog1);
    print(cat1);
    
	return 0;
}


