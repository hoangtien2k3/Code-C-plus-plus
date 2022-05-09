
/*
    C++ stringstream(): tách các từ trong chuỗi trong C++

    SYNTAX: 
            stringstream a(s1);

*/

#include<bits/stdc++.h>
using namespace std;

int main() {    
    string s = "java python PHP HTME";

    stringstream ss(s);
    
    string temp;
    while(ss >> temp) {
        cout << temp << endl;
    }



    return 0;
}