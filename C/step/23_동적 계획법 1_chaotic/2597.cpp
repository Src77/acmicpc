#include <bits/stdc++.h>
using namespace std;
int N;
int dp[301][2], stair[301];
int main() {
    int i, j;
    scanf("%d", &N);
    for (i = 1; i <= N; i++) scanf("%d", &stair[i]);
    dp[0][0] = 0;
    dp[1][0] = stair[1];
    dp[0][1] = dp[1][1] = -3000000;
    for (i = 2; i <= N; i++) {
        dp[i][0] = max(dp[i - 2][0], dp[i - 2][1]) + stair[i];
        dp[i][1] = dp[i - 1][0] + stair[i];
    }
    printf("%d", max(dp[N][0], dp[N][1]));
}