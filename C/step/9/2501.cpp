#include <cstdio>
int main(){
    int n, k, i;
    scanf("%d %d", &n, &k);
    for(i=1;i<=n;i++){
        if(n%i == 0){
            k--;
        }
        if(k==0){
            printf("%d", i);
            return 0;
        }
    }
    printf("0");
}