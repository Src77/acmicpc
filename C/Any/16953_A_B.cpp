#include <bits/stdc++.h>
using namespace std;
int a, b;
void sea(int k, map<int, int> &dp){
    if(k==0)return;
    if(k%2 == 0){
        if(dp.find(k/2) == dp.end())dp[k/2] = dp[k] + 1;
        else dp[k/2] = max(dp[k/2], dp[k] + 1);
        sea(k/2, dp);
    }
    if(k%10 == 1){
        if(dp.find(k/10) == dp.end())dp[k/10] = dp[k] + 1;
        else dp[k/10] = max(dp[k/10], dp[k/10] = dp[k] + 1);
        sea(k/10, dp);
    }
}
int main(){
    scanf("%d %d", &a, &b);
    map<int, int> dp;
    dp[b] = 1;
    sea(b, dp);
    if(dp.find(a) != dp.end())printf("%d", dp[a]);
    else printf("-1");
}