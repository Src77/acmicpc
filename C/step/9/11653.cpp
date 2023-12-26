#include <cstdio>
#include <algorithm>
int N, M, p[450], i, j, cnt, flag, sum, min;
int main(){
    for(i=2;i<=3163;i++){
        flag=1;
        for(j=0;j<cnt;j++){
            if(i%p[j]==0)flag=0;
        }
        if(flag){
            p[cnt++]=i;
        }
    }
    scanf("%d %d", &N);
    for(i=0;i<cnt;i++){
        if(N==1)break;
        while(1){
            if(N%p[i] == 0){
                N/=p[i];
                printf("%d\n", p[i]);
            }
            else break;
        }
    }
    if(N!=1)printf("%d", N);
}