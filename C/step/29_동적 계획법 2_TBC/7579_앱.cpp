#include <bits/stdc++.h>
using namespace std;
int n, m;
int dp[10001], b[100], c[100];
int main(){
    int i, t, j;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++)scanf("%d", &b[i]);
    for(i=0;i<n;i++)scanf("%d", &c[i]);
    for(i=1;i<=t;i++)dp[i] = -1;
    for(i=0;i<n;i++){
        for(j=10000-c[i];j>=0;j--){
            if(dp[j]==-1)continue;
            dp[j+c[i]] = max(dp[j] + b[i], dp[j+c[i]]);
        }
    }
    for(i=0;i<=10000;i++){
        if(dp[i] >= m){
            printf("%d", i);
            return 0;
        }
    }
}