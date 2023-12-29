#include <cstdio>
#include <algorithm>
int N, k, i, a[1000];
int main(){
    scanf("%d %d", &N, &k);
    for(i=0;i<N;i++)scanf("%d",&a[i]);
    std::sort(a, a+N, std::greater<>());
    printf("%d", a[k-1]);
}