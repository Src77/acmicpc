#include <bits/stdc++.h>
using namespace std;
int main(){
    int i, j, t, n, k;
    scanf("%d %d", &n, &k);
    vector<int> dp(k+1);
    fill(dp.begin(), dp.end(), 0);
    dp[0] = 1;
    for(i=0;i<n;i++){
        scanf("%d", &t);
        for(j=0;j<=k-t;j++){
            dp[j+t] += dp[j];
        }
    }
    printf("%d", dp[k]);
}