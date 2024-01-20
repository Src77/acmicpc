#include <bits/stdc++.h>
using namespace std;
#define LIM 2e9
int dp[501][501], arr[501], acs[501];
int qs(int s, int e){
    if(dp[s][e] != LIM)return dp[s][e];
    if(s==e){
        dp[s][e] = 0;
        return dp[s][e];
    }
    if(e-s == 1){
        dp[s][e] = arr[s] + arr[e];
        return dp[s][e];
    }
    for(int i=s;i<e;i++){
        dp[s][e] = min(qs(s, i) + qs(i+1, e) + acs[e + 1] - acs[s], dp[s][e]);
    }
    return dp[s][e];
}
int main(){
    int i, j, N, T, k, ans;
    for(scanf("%d", &T);T>0;T--){
        ans = 0;
        scanf("%d", &N);
        for(i=0;i<N;i++)scanf("%d", &arr[i]);
        for(i=0;i<N;i++){
            acs[i+1] = acs[i] + arr[i];
            for(j=0;j<N;j++){
                dp[i][j] = LIM;
            }
        }
        printf("%d\n", qs(0, N-1));
    }
}