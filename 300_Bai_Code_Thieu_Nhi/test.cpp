
/*
    Với n = 24, kết quả factorSum(n) = 5.
    24 -> (2 + 2 + 2 + 3) = 9 -> (3 + 3) = 6 -> (2 + 3) = 5 -> 5.
    Vì vậy kết quả trong trường hợp n = 24 là 5.

*/
#include<stdio.h>

int solve(int n){
    int sum = 0;
    for(int i=2; i<=n; ++i) {
        while(!(n % i)) {
            n /= i;
            sum += i;
        }
    }
    return sum;
}

int factorSum(int n)
{
    while (n != solve(n))
        n = solve(n);
    return n;
}


int main() {
    int n;
    scanf("%d", &n);
    printf("%d", factorSum(n));

}

