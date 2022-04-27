
/*  at() Function in C++

    ! syntax Vector at() C++:
        vector<object_type>  v;  
        v.at(i);  


    ! return value:  It returns the element of specified position.
*/


#include<iostream>  
#include<vector>  
#include<algorithm>
using namespace std;  

int main() {

    vector<int> v1 {1, 2, 3, 4};  
    for(int i=0; i < v1.size(); i++)  
    cout << v1.at(i) << " ";


    return 0;   
}  



