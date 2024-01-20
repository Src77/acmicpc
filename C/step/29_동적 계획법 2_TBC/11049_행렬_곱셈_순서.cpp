#include <bits/stdc++.h>
using namespace std;
#define LIM 2147483647
using ms = pair<int, int>;
int dp[501][501];
int qs(int s, int e, vector<ms> &arr){
    if(dp[s][e] != LIM)return dp[s][e];
    if(s==e){
        dp[s][e] = 0;
        return dp[s][e];
    }
    if(e-s == 1){
        dp[s][e] = arr[s].first * arr[s].second * arr[e].second;
        return dp[s][e];
    }
    for(int i=s;i<e;i++){
        dp[s][e] = min(qs(s, i, arr) + qs(i+1, e, arr) + 
                    arr[s].first * arr[i].second * arr[e].second, 
                    dp[s][e]);
    }
    return dp[s][e];
}
int main(){
    int i, j, N, T, k, ans, s, e;
    ans = 0;
    scanf("%d", &N);
    vector<ms> arr(N);
    for(i=0;i<N;i++){
        scanf("%d %d", &s, &e);
        arr[i] = pair(s, e);
    }
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            dp[i][j] = LIM;
        }
    }
    printf("%d", qs(0, N-1, arr));
}