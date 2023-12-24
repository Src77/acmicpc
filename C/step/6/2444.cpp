#include <stdio.h>
int main(){
    int i, j, N;
    scanf("%d", &N);
    N=N+1;
    for(i=1;i<N;i++){
        for(j=0;j<N-i-1;j++){
            printf(" ");
        }
        for(j=0;j<2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=N-2;i>0;i--){
        for(j=0;j<N-i-1;j++){
            printf(" ");
        }
        for(j=0;j<2*i-1;j++){
            printf("*");
        }
        printf("\n");
    }
}