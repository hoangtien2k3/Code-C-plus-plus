
/*  C++ Vector insert(): It is used to insert new element at specified position.

    ! Syntax: Consider a vector v. Syntax would be:
        insert(iterator, val);  
        insert(iterator, n, val);  
        insert(iterator, InputIterator first, InputIterator last);  


    Parameter:
        iterator:An iterator defines the position, where the new elements are to be inserted.
        val: The valspecifies the value which is to be inserted.
        n: Number of times the value is to be occurred.
        (first,last): It defines the range of elements which is to be inserted.


    Return value
    It returns an iterator pointing to the newly inserted element.

*/
// Example 1:   insert(iterator,val);  
// #include<iostream>  
// #include<vector>  
// using namespace std;  
// int main()  
// {  
//     vector<string> v {"java"};  
//     string str = "programs";  

//     v.insert(v.begin()+1, str);  
//     for(int i=0; i<v.size(); i++)  
//         cout << v[i] << " ";
        
//     return 0;  
// }  


// Example 2:   insert(iterator,n,val);
// #include<iostream>  
// #include<vector>  
// using namespace std;  
// int main()  
// {  
//     vector<string>  v {"C" , "Tutorials"};

//     v.insert(v.begin()+1, 2, "C");  
//     for(int i=0;i<v.size();i++)  
//         cout << v[i] << " ";  

//     return 0;  
// }  


// Example 3:   insert(iterator, InputIterator first, InputIterator last);  
#include<iostream>  
#include<vector>  
using namespace std;  
int main()  
{  
    vector<int> v {1,2,3,4,5};  
    vector<int> v1 {6,7,8,9,10}; 

    v.insert(v.end(),v1.begin(),v1.begin()+5);  
    for(int i=0; i<v.size(); i++)  
        cout << v[i] << " ";  


    return 0;  
}  