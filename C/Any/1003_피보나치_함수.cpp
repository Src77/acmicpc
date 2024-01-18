#include <bits/stdc++.h>
using namespace std;
int fib[41];
int main(){
    fib[1] = 1;
    int i, T;
    for(i=2;i<=40;i++)fib[i] = fib[i-1] + fib[i-2];
    for(scanf("%d", &T);T>0;T--){
        scanf("%d", &i);
        if(i==0){
            printf("1 0\n");
            continue;
        }
        printf("%d %d\n", fib[i-1], fib[i]);
    }
}