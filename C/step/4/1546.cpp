#include <stdio.h>
int N, c, m, i, t;
int main(){
    scanf("%d", &N);
    for(i=0;i<N;i++){
        scanf("%d", &t);
        m = m<t?t:m;
        c += t;
    }
    printf("%f", (float)100*c/(N*m));
}