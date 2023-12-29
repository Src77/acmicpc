#include <cstdio>
int main(){
    int N, i=6, cnt;
    scanf("%d", &N);
    N-=1;
    for(cnt=1;N>0;cnt++){
        N-=i;
        i+=6;
    }
    printf("%d", cnt);
}