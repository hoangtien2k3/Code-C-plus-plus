
// Function Pointer in C++ : con trỏ và hàm trong C++

// syntax:     int (*FunctionPtr) (int, int)
// Biến và con trỏ
#include<iostream>
#include<string>
using namespace std;

void swapIntValue(int *ptr1, int *ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main()
{
	int value1 = 2;
	int value2 = 5;
	
	cout << "Before swap: " << value1 << " " << value2 << endl;
	swapIntValue(&value1, &value2);
	cout << "After swap : " << value1 << " " << value2 << endl;
	
	system("pause");
	return 0;
}





/*
    + chúng ta muốn thay đổi địa chỉ của con trỏ đối số đang trỏ đến, chúng ta có thể sử dụng 
    tham chiếu cho con trỏ đối số.
*/

// con trỏ và con trỏ trong function
void setToNull(int *&ptr)	// &*ptr truyền đối số vào con trỏ trỏ đến biến
{
	ptr = NULL;
}

int main()
{
	int value = 5;
	int *pValue = &value;
	
	cout << "pValue point to " << pValue << endl;
	setToNull(pValue);
	if(pValue == NULL)
		cout << "pValue point to NULL" << endl;
	else
		cout << "pValue point to " << pValue << endl;
	
	return 0;
}