#include <stdio.h>
int N, M, a[101], i, j, s, e, v;
int main(){
    scanf("%d %d", &N, &M);
    for(i=1;i<=M;i++){
        scanf("%d %d %d", &s, &e, &v);
        for(j=s;j<=e;j++){
            a[j]=v;
        }
    }
    for(i=1;i<=N;i++)printf("%d ", a[i]);
}