#include <cstdio>
int A[101][101], N, M, i, j, t;
int main(){
    scanf("%d %d", &N, &M);
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            scanf("%d", &A[i][j]);
        }
    }
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            scanf("%d", &t);
            A[i][j]+=t;
        }
    }
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }
}