

// Con trỏ và kiểu trả về của hàm

/*
    Chúng ta đã cùng tìm hiểu 2 kiểu giá trị trả về của hàm có kiểu trả về:
        Hàm trả về giá trị.
        Hàm trả về tham chiếu.
*/

#include<iostream>
using namespace std;

int * createAnInteger(int value = 0)
{
	int myInt = value;
	return &myInt;
}

int main()
{
	int *pInt = createAnInteger(10);
	cout << *pInt << endl;
	
	return 0;
}



