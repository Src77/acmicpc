#include <cstdio>
int C[10001], N, t, i;
int main(){
    scanf("%d", &N);
    for(i=0;i<N;i++){
        scanf("%d", &t);
        C[t]++;
    }
    for(i=1;i<=10000;i++){
        while(C[i]>0){
            printf("%d\n", i);
            C[i]--;
        }
    }
}