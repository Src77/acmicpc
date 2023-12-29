#include <cstdio>
int a0, a1, c, n0;
int main(){
    scanf("%d %d %d %d", &a0, &a1, &c, &n0);
    printf("%d", a0<=c && a0*n0+a1<=c*n0?1:0);
}