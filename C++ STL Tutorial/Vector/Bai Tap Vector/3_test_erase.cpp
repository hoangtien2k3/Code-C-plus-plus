
/*
    Bài 4: Đọc vào n số nguyên từ bàn phím. Xóa bỏ số ở vị trí thứ k của
            dãy, với k đọc vào từ bàn phím. Đưa dãy đã xóa ra màn hình.


*/

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main() {
    int n;
    cout << "Enter the size n: ";
    cin >> n;

    vector<int> vt(n);

    for(int i=0; i<vt.size(); i++) {
        cout << "vt["<<i<<"] = ";
        cin >> vt[i];
    }


    int k; // vị trí cần xóa trong vector
    cout << "Enter the index k: ";
    cin >> k;

    vt.erase(vt.begin() + k); // vt.begin() + k ( luôn là như vậy nhé)
    for(int i=0; i< vt.size(); i++) {
        cout << vt[i] << " ";
    }


    return 0;
}