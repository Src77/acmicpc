#include <cstdio>
int pr[3402], N, cnt, i, flag, tcnt;
void deter(int n, int cur){
    if(n==cnt)return;
    if(cur * pr[n] < 32000){
        deter(n+1, cur*pr[n]);
        tcnt++;
        deter(n+1, cur);
    }
    else{
        return;
    }
}
int main(){
    pr[0] = 2;
    cnt = 1;
    for(N=3;N<31623;N++){
        flag = 0;
        for(i=0;i<cnt;i++){
            if(N%pr[i] == 0){
                flag = 1;
                break;
            }
        }
        if(!flag){
            pr[cnt++]=N;
        }
    }
    printf("%d\n", cnt);
    tcnt = 0;
    deter(0, 1);
    printf("%d\n", tcnt);
}
