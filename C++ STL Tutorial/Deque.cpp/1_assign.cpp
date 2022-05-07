
/*  C++ Deque assign():
    
    + function assigns new contents to the deque container and the size of the container is modified accordingly.

    Syntax:
                void assign(InputIterator first, InputIterator last);  
                void assign(int n, value_type val);   


    Parameter:
        (first,last): It defines the range between which the new elements to be inserted.

        n:  It defines the new size of the deque container.
        val:  New value to be inserted.


*/

#include <iostream>  
#include<deque>  
using namespace std;  
int main()  
{  
    deque<int> first = {1,2,3,4};  
    deque<int> second;  

    deque<int>::iterator itr = second.begin();  

    second.assign(first.begin(), first.end());  

    for(itr = second.begin(); itr != second.end(); ++itr)  
        std::cout << *itr << " ";  




        return 0;  
}  