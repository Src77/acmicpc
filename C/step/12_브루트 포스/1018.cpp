#include <cstdio>
#include <algorithm>
int M, N, a[50][50], min=64;
char s;
int calc(int x, int y){
    int i, j, cnt=0;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            if((i+j)%2 != a[i+x][j+y])cnt++;
        }
    }
    return std::min(cnt, 64-cnt);
}
int main(){
    int i, j, k;
    scanf("%d %d", &N, &M);
    for(i=0;i<N;i++){
        for(j=0;j<M;j++){
            do{
                scanf("%c", &s);
            }while(s!='W' && s!='B');
            if(s=='W')a[i][j]=0;
            else a[i][j]=1;
        }
    }
    for(i=0;i<=N-8;i++){
        for(j=0;j<=M-8;j++){
            min = std::min(calc(i, j), min);
        }
    }
    printf("%d", min);
}