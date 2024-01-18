#include <bits/stdc++.h>
using namespace std;
int i, fib[1001];
int main(){
    fib[0] = 1; fib[1] = 1;
    for(i=2;i<=1000;i++)fib[i] = (fib[i-1] + fib[i-2]) % 10007;
    scanf("%d", &i);
    printf("%d", fib[i]);
}