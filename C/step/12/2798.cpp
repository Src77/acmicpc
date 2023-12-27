#include <cstdio>
#include <algorithm>
int a[100], i, j, k, N, M, max;
int main(){
    scanf("%d %d", &N, &M);
    for(i=0;i<N;i++)scanf("%d", &a[i]);
    for(i=0;i<N;i++){
        for(j=i+1;j<N;j++){
            for(k=j+1;k<N;k++){
                if(a[i]+a[j]+a[k]<=M){
                    max = std::max(a[i]+a[j]+a[k], max);
                }
            }
        }
    }
    printf("%d", max);
}
