#include <cstdio>
#include <algorithm>
int i, a[5], k;
int main(){
    for(i=0;i<5;i++)scanf("%d",&a[i]);
    std::sort(a, a+5);
    for(i=0;i<5;i++)k+=a[i];
    printf("%d\n%d", k/5, a[2]);
}