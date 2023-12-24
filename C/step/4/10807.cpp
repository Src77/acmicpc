#include <stdio.h>
int N, v, i, c;
int main(){
    int a[100];
    scanf("%d", &N);
    for(i=0;i<N;i++)scanf("%d",&a[i]);
    scanf("%d", &v);
    for(i=0;i<N;i++)c += a[i]==v;
    printf("%d", c);
}