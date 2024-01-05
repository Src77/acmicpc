#include <cstdio>
long long fact(long long n){
    if(n==0)return 1;
    else return n * fact(n-1);
}
int main(){
    long long N;
    scanf("%lld", &N);
    printf("%lld", fact(N));
}