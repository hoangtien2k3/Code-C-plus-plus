
#include<iostream>
using namespace std;



int *setToNull(int *&ptr)	// khi *&ptr thì nó lấy ra giá trị // khi *ptr lấy ra địa chỉ 
{
	ptr = NULL;
    return ptr;
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