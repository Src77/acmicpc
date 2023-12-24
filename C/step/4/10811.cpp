#include <stdio.h>
#include <algorithm>
int N, M, a[101], i, j, k, s, e;
int main(){
    scanf("%d %d", &N, &M);
    for(i=1;i<=N;i++){
        a[i]=i;
    }
    for(i=1;i<=M;i++){
        scanf("%d %d", &s, &e);
        for(j=s, k=e;j<=(s+e)/2;j++, k--){
            std::swap(a[j], a[k]);
        }
    }
    for(i=1;i<=N;i++){
        printf("%d ", a[i]);
    }
}