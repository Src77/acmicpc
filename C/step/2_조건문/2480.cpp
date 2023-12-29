#include <stdio.h>
int max(int a, int b){
    return a>b?a:b;
}
int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if(a==b && b==c){
        printf("%d", a*1000 + 10000);
    }
    else if (a==b || b==c){
        printf("%d", b*100 + 1000);
    }
    else if (a==c){
        printf("%d", a*100 + 1000);
    }
    else{
        printf("%d", max(a,(max(b,c)))*100);
    }
}