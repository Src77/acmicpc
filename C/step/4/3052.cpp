#include <stdio.h>
int a[42], i, t;
int main(){
    for(i=0;i<10;i++){
        scanf("%d", &t);
        a[t%42]=1;
    }
    for(i=0, t=0;i<42;i++)t+=a[i];
    printf("%d", t);
}