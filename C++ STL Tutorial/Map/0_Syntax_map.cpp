
/*
    Map là một kiểu dữ liệu với mỗi phần tử là ánh xạ giữa yếu tố key (khóa) với giá trị (value) của nó. 
    Tương tự set, mapmap không chứa hai phần tử nào giống nhau và các phần tử trong map được 
    sắp xếp theo một thứ tự nào đó. Mỗi phần tử trong mapmap có yếu tố keykey dùng để xác định 
    valuevalue của nó, điều này cũng có nghĩa là keykey và valuevalue có thể có kiểu khác nhau.


    Syntax: 
                    map<key, value> name;

                    map<int, int> a;
                    map<char, int> b;

*/

#include <string.h>  
#include <iostream>  
#include <map>  
#include <utility>  
using namespace std;  
int main()  
{  
    map<int, string> Employees;  

    Employees[101] = "Nikita";  
    Employees[105] = "John";  
    Employees[103] = "Dolly";  
    Employees[104] = "Deep";  
    Employees[102] = "Aman";  
    cout << "Employees[104]=" << Employees[104] << endl << endl;  
    cout << "Map size: " << Employees.size() << endl;  
    cout << endl << "Natural Order:" << endl;  
    for(map<int, string>::iterator itr=Employees.begin(); itr!=Employees.end(); ++itr)  
    {  
        cout << (*itr).first << ": " << (*itr).second << endl;  
    }  
    cout << endl << "Reverse Order:" << endl;  
    for( map<int,string>::reverse_iterator itr=Employees.rbegin(); itr!=Employees.rend(); ++itr)  
    {  
        cout << itr->first << ": " << itr->second << endl;  
    }  

    return 0;
}  