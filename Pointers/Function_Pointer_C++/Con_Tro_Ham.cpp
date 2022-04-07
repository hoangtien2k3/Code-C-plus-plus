
// con trỏ hàm là một loại con trỏ khá đặc biệt trong c

/*
    + Function Pointer syntax:
    Cú pháp của một con trỏ hàm có nhiều điểm khác biệt so với cách khai báo con trỏ thông thường.

    <return_type> (*<name_of_pointer>)( <data_type_of_parameters> );

    Ex: int (*pFoo) ();
    Trong đó int là kiểu trả về của hàm foo, pFoo là tên con trỏ, và hàm foo không có tham số nên 
    phần trong ngoặc chúng ta bỏ trông




*/

/*
    Function pointers syntax:
    (Cú pháp của một con trỏ hàm có nhiều điểm khác biệt so với cách khai báo con trỏ thông thường.)
*/
    //todo:  <return_type> (*<name_of_pointer>)( <data_type_of_parameters> );
    //! Lưu ý, khi cần lấy địa chỉ của hàm, chúng ta chỉ sử dụng duy nhất tên hàm, không đặt thêm cặp dấu ngoặc vào.
    //* Ex: void(*pSwap) (int &, int &) = swapValue;

/*
    ///! function prototypes
    int foo();
    double goo();
    int hoo(int x);
    
    ///! function pointer assignments
    int (*funcPtr1)() = foo; // okay
    int (*funcPtr2)() = goo; // wrong -- return types don't match!
    double (*funcPtr4)() = goo; // okay
    funcPtr1 = hoo; // wrong -- fcnPtr1 has no parameters, but hoo() does
    int (*funcPtr3)(int) = hoo; // okay

*/


#include<iostream>
#include<string>
#include<cmath>
using namespace std;

void swapValue(int &value1, int &value2) 
{
	int temp = value1;
	value1 = value2;
	value2 = temp;
}

int main()
{
	void(*pSwap) (int &, int &) = swapValue; //! Lưu ý, khi cần lấy địa chỉ của hàm, chúng ta chỉ sử dụng duy nhất tên hàm, không đặt thêm cặp dấu ngoặc vào.

	cout << pSwap << endl;
	cout << swapValue << endl;
	
	return 0;
}




