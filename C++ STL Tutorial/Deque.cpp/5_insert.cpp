
/*  C++ Deque insert(): 

    C++ Deque insert() function inserts new element just before the specified position pos 
    and the size of the container increases by the number of elements are inserted. 
    Insertion of an element can be done either from front or from the back.


    Syntax
                    iterator insert(iterator pos, value_type val);  
                    insert(iterator pos, int n, value_type val);  
                    insert(iterator pos, InputIterator first,InputIterator last);  


    Parameter:
    pos: Position before which the new element is to be inserted.

    val: New value to be inserted.

    n: Number of times the value to be inserted.

*/

#include <iostream>  
#include<deque>  
using namespace std;  
int main()  
{  
    deque<string> language={"java",".net","C"};  
      
    ++itr;  
    language.insert(itr,"C++");  
    for(deque<string>::iterator itr=language.begin(); itr!=language.end(); ++itr)  
        cout<<*itr<<" ";  
    return 0;  
}  