#include <bits/stdc++.h>
using namespace std;
int main() {
    int i, j, N;
    scanf("%d", &N);
    vector<vector<long long> > dp(N + 1, vector<long long>(10, 0));
    fill(dp[1].begin() + 1, dp[1].end(), 1);
    dp[1][0] = 0;
    for (i = 2; i <= N; i++) {
        dp[i][0] = dp[i - 1][1];
        dp[i][9] = dp[i - 1][8];
        for (j = 1; j < 9; j++) {
            dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % 1000000000;
        }
    }
    long long temp = accumulate(dp[N].begin(), dp[N].end(), 0LL) % 1000000000;
    printf("%lld", temp);
}