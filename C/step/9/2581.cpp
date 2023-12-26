#include <cstdio>
#include <algorithm>
int N, M, p[1250], i, j, cnt, flag, sum, min;
int main(){
    for(i=2;i<=10000;i++){
        flag=1;
        for(j=0;j<cnt;j++){
            if(i%p[j]==0)flag=0;
        }
        if(flag){
            p[cnt++]=i;
        }
    }
    scanf("%d %d", &N, &M);
    flag = 1; min = -1;
    for(i=0;i<cnt;i++){
        if(p[i]>=N && flag && p[i]<=M){
            flag = 0;
            min = p[i];
        }
        if(p[i]>=N && p[i]<=M){
            sum += p[i];
        }
    }
    if(flag)printf("-1");
    else printf("%d\n%d", sum, min);
}