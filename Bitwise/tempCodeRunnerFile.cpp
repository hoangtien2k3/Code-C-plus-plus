
// đếm  số bit có giá trị 1 của n

#include<iostream>
using namespace std;

int main() {
	int a = 27; // 11011

	// Code tắt bit thứ n của a (thứ 4)
	a = a & ~(1 << (4 - 1)); // 11011 -> 10011 => 19

	cout << a << endl;


	// Code bật bit thứ n của a
	a = a | (1 << (4 - 1)); // 10011 -> 11011 => 27

	cout << a << endl;

	return 0;
}