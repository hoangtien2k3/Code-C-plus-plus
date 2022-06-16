
#include<bits/stdc++.h>
using namespace std;

long long Fibonacci(long long n) {
    if (n == 0) return 0;
    else if (n == 1) return 1;
    return Fibonacci(n-1) + Fibonacci(n-2);
}

long long result(long long n) {
    
}

int main() {
    long long n;
    cin >> n;
    cout << Fibonacci(n);
    
    return 0;
}

