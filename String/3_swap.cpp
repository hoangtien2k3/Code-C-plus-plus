
/*  C++ string swap() : 
    this function is used to exchanges the value of two string objects.

    syntax: 
            s1.swap(s2);


    Parameters
    It contains single parameter, whose value is to be exchanged with that of the string object.

    Return value
    It does not return any value.

*/

#include<iostream> 
#include<string> 
using namespace std;  

int  main()  
{  
    string r = "10";  
    string m = "20";

    cout<<"Before  swap r contains " << r << endl;
    cout<<"Before  swap m contains " << m << endl << endl;

    r.swap(m);   

    cout<< "After  swap r contains " << r<< endl;
    cout<< "After  swap m contains " << m<<endl;


    return 0;  
}  