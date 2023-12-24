#include <stdio.h>
int trans(int n){
    return (n%10) * 100 + (n/100) + ((n/10)%10)*10;
}
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    a = trans(a);
    b = trans(b);
    printf("%d", a>b?a:b);
}