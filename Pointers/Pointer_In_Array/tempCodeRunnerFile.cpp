
#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;


int main() {
    // int n = 5;
    // int *p = &n; //p point to n

    // (*p)++; // 6

    // // p++;

    // int n2 = *p * n; // 6 * 5 = 30

    // std::cout << *p << std::endl;
    // // std::cout << p << std::endl;
    // std::cout << n2 << std::endl;


    // char str[] = "Hello!";
    // char *p_str = str;

    // cout << str << endl;
    // cout << p_str << endl;

    char my_name[] = "Le Tran Dat";
    for (int i = 0; i < strlen(my_name); i++)
    {
	cout << my_name[i];
    }
    cout << endl;
}