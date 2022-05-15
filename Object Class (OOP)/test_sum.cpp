
// sum = 1 + 2 + ... + N

#include<iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long sum = 0;
    cout << (n * (n + 1)) / 2;
    return 0;
}