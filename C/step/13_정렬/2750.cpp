#include <cstdio>
#include <algorithm>
int N, i, a[1000];
int main(){
    scanf("%d", &N);
    for(i=0;i<N;i++)scanf("%d",&a[i]);
    std::sort(a, a+N);
    for(i=0;i<N;i++)printf("%d\n",a[i]);
}