#include <cstdio>
int n, k, i, cnt;
int main(){
    while(1){
        scanf("%d", &n);
        if(n==-1)break;
        k=cnt=0;
        for(i=1;i<n;i++){
            if(n%i == 0){
                k+=i;
            }
        }
        if(k==n){
            printf("%d = %d", n, 1);
            for(i=2;i<n;i++){
                if(n%i == 0)printf(" + %d", i);
            }
            printf("\n");
        }
        else{
            printf("%d is NOT perfect.\n", n);
        }
    }
}