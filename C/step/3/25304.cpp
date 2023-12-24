#include <stdio.h>
int X, N, a, b, c;
int main(){
    scanf("%d %d", &X, &N);
    for(int i=0;i<N;i++){
        scanf("%d %d", &a, &b);
        c += a*b;
    }
    if(X==c)printf("Yes");
    else printf("No");
}