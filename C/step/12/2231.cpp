#include <cstdio>
int i, N;
int sum(int x){
    int cnt = 0;
    cnt += x;
    while(x>0){
        cnt+=x%10;
        x/=10;
    }
    return cnt;
}
int main(){
    scanf("%d", &N);
    for(i=0;i<N;i++){
        if(sum(i)==N){
            printf("%d", i);
            return 0;
        }
    }
    printf("0");
}