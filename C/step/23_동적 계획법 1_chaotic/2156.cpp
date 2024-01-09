#include <bits/stdc++.h>
using namespace std;
int N, ans;
int dp[10001][3], wine[10001];
int main() {
    int i, j;
    scanf("%d", &N);
    for (i = 1; i <= N; i++) scanf("%d", &wine[i]);
    for (i = 1; i <= N; i++) {
        dp[i][0] = max(dp[i - 1][0], max(dp[i - 1][1], dp[i - 1][2]));
        dp[i][1] = dp[i - 1][0] + wine[i];
        dp[i][2] = dp[i - 1][1] + wine[i];
    }
    printf("%d", max(dp[N][0], max(dp[N][1], dp[N][2])));
}