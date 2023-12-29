#include <cstdio>
#include <algorithm>
int N, p[170], i, j, cnt, flag;
int main(){
    for(i=2;i<=1000;i++){
        flag=1;
        for(j=0;j<cnt;j++){
            if(i%p[j]==0)flag=0;
        }
        if(flag){
            p[cnt++]=i;
        }
    }
    for(scanf("%d", &N), j=0;N>0;N--){
        scanf("%d", &i);
        if(std::find(p, p+cnt, i)!=p+cnt){
            j++;
        }
    }
    printf("%d", j);
}