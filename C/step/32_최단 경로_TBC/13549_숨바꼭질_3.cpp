#include <bits/stdc++.h>
#define LIM 200000
using namespace std;
int dp[LIM];
int main(){
    int i, N, K;
    for(i=0;i<LIM;i++)dp[i]=LIM;
    scanf("%d %d", &N, &K);
    queue<int> Q;
    for(i=N;i<LIM;i*=2){
        dp[i]=0;
        Q.push(i);
        if(i==K){
            printf("0");
            return 0;
        }
        if(i==0)break;
    }
    while(!Q.empty()){
        int t = Q.front();
        Q.pop();
        for(i=t-1;i<LIM;i*=2){
            if(i<0)break;
            if(dp[i] != LIM){
                if(i==0)break;
                else continue;
            }
            dp[i] = dp[t] + 1;
            Q.push(i);
            if(i==K){
                printf("%d", dp[i]);
                return 0;
            }
            if(i==0)break;
        }
        for(i=t+1;i<LIM;i*=2){
            if(dp[i] != LIM)continue;
            dp[i] = dp[t] + 1;
            Q.push(i);
            if(i==K){
                printf("%d", dp[i]);
                return 0;
            }
        }
    }
}