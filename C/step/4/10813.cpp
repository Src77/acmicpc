#include <stdio.h>
#include <algorithm>
int N, M, a[101], s, e, i;
int main(){
    scanf("%d %d", &N, &M);
    for(i=1;i<=N;i++){
        a[i]=i;
    }
    for(i=1;i<=M;i++){
        scanf("%d %d", &s, &e);
        std::swap(a[s], a[e]);
    }
    for(i=1;i<=N;i++)printf("%d ",a[i]);
}