#include <cstdio>
#include <cstring>
#include <cctype>
long long N, d, k, t;
int main(){
    scanf("%lld %lld", &N, &d);
    for(k=1;k<=N;k*=d);
    k/=d;
    while(1){
        t = N/k;
        N -= t*k;
        k/=d;
        if(t>9){
            printf("%c", t-10+'A');
        }
        else{
            printf("%d", t);
        }
        if(k==0)break;
    }
}