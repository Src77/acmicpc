#include <stdio.h>
int N, t, i;
int main(){
    char c[101];
    scanf("%d", &N);
    scanf("%s", c);
    for(i=0;i<N;i++){
        t += c[i]-'0';   
    }
    printf("%d", t);
}