#include <bits/stdc++.h>
using namespace std;
int main() {
    int i, N;
    scanf("%d", &N);
    vector<int> dp(3 * N + 1);
    fill(dp.begin(), dp.end(), 1e6);
    dp[1] = 0;
    for (i = 1; i < N; i++) {
        dp[i * 2] = min(dp[i * 2], dp[i] + 1);
        dp[i * 3] = min(dp[i * 3], dp[i] + 1);
        dp[i + 1] = min(dp[i + 1], dp[i] + 1);
    }
    printf("%d", dp[N]);
}