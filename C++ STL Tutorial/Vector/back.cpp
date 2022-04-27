
/*  C++ Vector back()

    ! syntax back:
        v.back(); 


    ! Parameter
    This function does not contain any parameter.

    ! Return value
    This function returns the last element of vector

*/



#include<iostream>  
#include<vector>  
using namespace std;  
int main() {  


    vector<string> fruit {"SamSung","Apple","Tien"};  
    cout << fruit.back(); // hàm vector back nó sẽ in ra phần tử cuối cùng Function


    return 0;   
}  