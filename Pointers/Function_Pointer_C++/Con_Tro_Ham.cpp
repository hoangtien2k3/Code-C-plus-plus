
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
/*
    ! Lưu ý, tham số mặc định của hàm không áp dụng được cho con trỏ hàm, 
    ! vì tham số mặc định được compiler xác định tại thời điểm compile chương trình, 
    ! còn con trỏ hàm được sử dụng tại thời điểm chương trình đang chạy.

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
    int a = 1, b = 5;
	void(*pSwap) (int &, int &) = swapValue;

	cout << "Before: " << a << " " << b << endl;
	(*pSwap)(a, b);
	cout << "After:  " << a << " " << b << endl;

	return 0;
}





///! ////////////////////////////////////////

#include<iostream>
#include<string>
#include<cmath>
using namespace std;

bool ascending(int left, int right)
{
	return left > right;
}

bool descending(int left, int right)
{
	return left < right;
}

void selectionSort(int *arr, int length, bool (*comparisonFunc)(int, int))
{
	for (int i_start = 0; i_start < length; i_start++)
	{
		int minIndex = i_start;

		for (int i_current = i_start + 1; i_current < length; i_current++)
		{
			if (comparisonFunc(arr[minIndex], arr[i_current])) // use function pointer as ascending or descending function
			{
				minIndex = i_current;
			}
		}

		swap(arr[i_start], arr[minIndex]); // std::swap
	}
}

int main()
{
	int arr[] = { 1, 4, 2, 3, 6, 5, 8, 9, 7 };
	int length = sizeof(arr) / sizeof(int);

	selectionSort(arr, length, descending);
    for (int i=0; i<length; i++) {
        std::cout << arr[i] << "\t";
    }
    std::cout << "\n";
    selectionSort(arr, length, ascending);
    for (int i=0; i<length; i++) {
        std::cout << arr[i] << "\t";
    }

	return 0;
}

