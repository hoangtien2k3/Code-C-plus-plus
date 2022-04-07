
// con trỏ hàm là một loại con trỏ khá đặc biệt trong c

/*
    + Function Pointer syntax:
    Cú pháp của một con trỏ hàm có nhiều điểm khác biệt so với cách khai báo con trỏ thông thường.

    <return_type> (*<name_of_pointer>)( <data_type_of_parameters> );

    Ex: int (*pFoo) ();
    Trong đó int là kiểu trả về của hàm foo, pFoo là tên con trỏ, và hàm foo không có tham số nên 
    phần trong ngoặc chúng ta bỏ trông




*/

void swapIntValue  (int &value1, int &value2) {
    int temp = value1;
    value1 = value2; 
    value2 = temp;
}
=>  Hàm swapValue có không có kiểu trả về, và nó nhận vào 2 tham số đều có kiểu tham chiếu int.


+ nên chúng ta có thể khai báo 1 con trỏ để trỏ đến hàm swapValue như sau:
    
    void(*pSwap) (int &, int &);



#include<stdio.h>
#include<math.h>




