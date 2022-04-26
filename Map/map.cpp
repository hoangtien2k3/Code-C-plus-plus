
/*
    Map trong C++ là một tập hợp các phần tử được sắp xếp theo thứ tự cụ thể, mà mỗi phần tử trong đó được 
    hình thành bởi sự kết hợp của một cặp khóa và giá trị (key & value), với mỗi khóa là duy nhất trong map.

*/
/*
    syntax:     std::map <k_type, v_type> mp;

    + Khai báo 1 map trong C++:

        std::map <k_type, v_type> mp;

    + Khai báo đồng thời nhiều map trong C++:

        std::map<k_type, v_type> name1, name2, name3, ... ;


    + Gán giá trị cho map trong C++:         
        mp[key] = value;
    Ex:     
            std::map<std::string, int> mp; 
            mp["Kiyoshi"] = 1; // {"Kiyoshi", 1}
            mp["Honda"] = 2;   // {"Honda", 2}
            mp["Suzuki"] = 3;  // {"Suzuki", 3}


        std::map<k_type, v_type> mp = { {k1, v1}, {k2, v2}, {k3, v3}, ...};


*/

#include<iostream>
#include<string>
#include<map>
#include<set>

int main() {
    std::map<int, int> mp;
    mp[100] = 200; //(100, 200);
    mp[200] = 300;

    mp.insert({300, 400});
    mp.insert({400, 500});


    // in các phần tử trong map:
    for(std::pair<int, int> x: mp) {
        std::cout << x.first << "   " << x.second << std::endl;
    }


    // C2
    std::cout << std::endl;
    for(auto it : mp) {
        std::cout << it.first << "  " << it.second << std::endl;
    }


    // C3
    std::cout << std::endl;
    for(std::map<int, int>:: iterator it = mp.begin(); it != mp.end(); it++) {
        std::cout << (*it).first << "   " << (*it).second << std::endl;
    }




    return 0;
}