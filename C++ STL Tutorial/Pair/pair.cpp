
/*  C++ Pair: // dùng để lưu các cặp số mà nó đi kèm với nhau

    Syntax: 
            pair<datatype1, datatype2> v;

    
    v.firse

    v.second


*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main() {
    // pair<int, int> v = make_pair(100, 200);

    pair<int, int> v = {100, 200};
    
    cout << v.first << endl;
    cout << v.second << endl;


    return 0;
}

