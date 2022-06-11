
/*
   ! Pure Virtual Function in C++: Hàm thuần ảo trong C++
    Hàm thuần ảo Pure Virtual Function được sử dụng khi:
        + không cần sử dụng hàm này trong lớp Cha(Base class). mà chỉ phục vụ cho lớp Con(Driver class)
        + lớp Con(Driver class) bắt buộc phải định nghĩa lại hàm thuần ảo.


    Example:  Có hai cách để tạo một hàm ảo:
            *Cách 1:
                class Shape{
                    public:
                        virtual void calculateArea() = 0;     //! creating a pure virtual function.
                };

            *Cách 2:
                class Shape {
                    public:
                        virtual void calculateAre() {}
                };


    *CHÚ Ý:  
            + Hàm thuần ảo không có thân hàm và bắt buộc phải kết thúc với “= 0”.
            + Cú pháp “= 0” không phải là gán hàm thuần ảo có giá trị bằng 0. 
            Nó chỉ là cú pháp cho biết đó là hàm thuần ảo (pure virtual function).

*/


/*
    ! LỚP TRỪU TƯỢNG (abstract class):
        + Một lớp bao gồm hàm thuần ảo được gọi là lớp trừu tượng (abstract class)
        
        + Chúng ta không thể tạo ra các đối tượng của một lớp trừu tượng. 
        Mục đích chính của lớp trừu tượng là để các lớp khác kế thừa lại.


    Ví Dụ Thực Tế: Trừu tượng (Abstraction) trong đời sống thật 
        Tôi là một “con nghiện” cafe, mỗi buổi sáng đến công ty, sau khi ăn sáng xong là tôi phải 
        làm 1 nháy cafe sữa đá. Để có cốc cafe đó, việc duy nhất tôi cần làm là đến quầy bán cafe 
        và gọi “em ơi, cho a 1 cốc cafe như mọi hôm (nhiều sữa ít đá)“. Khoảng 2~3 phút sau là tôi 
        đã có ngay một cốc cafe trên tay mà méo cần quan tâm nó được làm ra như thế nào, tôi chỉ cần
        biết tôi gọi 1 cốc cafe, sau đó trả tiền và lấy cafe, chấm hết.

*/

#include <iostream>
using namespace std;

// Abstract class
class Shape{
protected:
	float dimension;
public:
	void getDimension(){
        cin >> dimension;
    }

    // pure virtual Function
    // virtual float calculateArea() = 0; // sách 1
    virtual float calculateArea() {} // cách 2
};

// Derived class
class Square : public Shape{
public:
    float calculateArea() {
        return dimension * dimension;
    }
};

// Derived class
class Circle : public Shape{
public:
    float calculateArea() {
        return 3.14 * dimension * dimension;
    }
};

int main(){
	Square square;
    Circle circle;

    cout << "Enter the length of the square: ";
    square.getDimension();
    cout << "Area of square: " << square.calculateArea() << endl;

    cout << "\nEnter radius of the circle: ";
    circle.getDimension();
    cout << "Area of circle: " << circle.calculateArea() << endl;
    
	return 0;
}
