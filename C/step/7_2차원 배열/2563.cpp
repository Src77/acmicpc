#include <cstdio>
int N, B[101][101];
int x, y, i, j;
int main(){
    for(scanf("%d", &N);N>0;N--){
        scanf("%d %d", &x, &y);
        for(i=x;i<x+10;i++){
            for(j=y;j<y+10;j++){
                B[i][j] = 1;
            }
        }
    }
    for(i=1;i<=100;i++){
        for(j=1;j<=100;j++){
            if(B[i][j])N++;
        }
    }
    printf("%d", N);
}