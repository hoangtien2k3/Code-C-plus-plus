
/*
    bài 5: Đọc vào n số (2<n<50). Đọc thêm một số x, chèn số x vào vị trí
            thứ 2 của dãy. Đưa dãy sau khi chèn ra màn hình 


*/  

#include<iostream>
#include<vector>
using namespace std;

int main() {
    unsigned int n;
    cout << "ENTER THE N ELEMENTS LIST VECTER: ";
    cin >> n;

    vector<int> vec(n);

    int i = 0;
    for(vector<int>::iterator itr = vec.begin(); itr != vec.end(); itr++) {
        cout << "vec["<< i++ <<"] = ";
        cin >> *itr;
    }


    int x;
    cout << "Enter add the elemens x: ";
    cin >> x;

    vec.insert(vec.begin() + 2, x);

    for(auto itr = vec.begin(); itr != vec.end(); itr++) {
        cout << *itr << " ";
    }



    return 0;
}