#include <stdio.h>
int a[31], i, t;
int main(){
    for(i=1;i<=28;i++){
       scanf("%d", &t);
       a[t] = 1; 
    }
    for(i=1;i<=30;i++)if(!a[i])printf("%d\n", i);
}