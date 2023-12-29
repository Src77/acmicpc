#include <cstdio>
#include <cmath>
long long pr[5000], N, cnt, i, flag, tcnt, T, s, e, mid;
void deter(long long n, long long cur, long long sign, long long target){
    if(n==cnt)return;
    if(cur * pr[n] < 45000){
        deter(n+1, cur*pr[n], sign*-1, target);
        tcnt += (target / (cur*cur*pr[n]*pr[n])) * (-1 * sign);
        deter(n+1, cur, sign, target);
    }
    else{
        return;
    }
}
bool is_square_free(long long n){
    for(i=0;i<cnt;i++){
        if(n<pr[i]*pr[i])return true;
        if(n%(pr[i]*pr[i])==0){
            return false;
        }
    }
    return true;
}
int main(){
    pr[0] = 2;
    cnt = 1;
    for(N=3;N<45000;N++){
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
    scanf("%lld", &T);
    s = T;
    e = 2*T;
    mid = (s+e)/2;
    while(s<=e){
        tcnt = 0;
        mid = (s+e)/2;
        deter(0, 1, -1, mid);
        if(mid-tcnt==T){
            while(!is_square_free(mid))mid--;
            printf("%lld\n", mid);
            return 0;
        }
        else if(mid-tcnt>T){
            e = mid-1;
        }
        else{
            s = mid+1;
        }
    }
}
