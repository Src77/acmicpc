#include <cstdio>
int main(){
    int C, N;
    for(scanf("%d", &C);C>0;C--){
        scanf("%d", &N);
        printf("%d ", N/25);
        N -= (N/25)*25;
        printf("%d ", N/10);
        N -= (N/10)*10;
        printf("%d ", N/5);
        N -= (N/5)*5;
        printf("%d\n", N);
    }
}