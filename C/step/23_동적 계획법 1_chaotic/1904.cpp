#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, i;
    scanf("%d", &N);
    vector<int> dp(N + 1);
    dp[0] = 1, dp[1] = 1;
    for (i = 2; i <= N; i++) {
        dp[i] = (dp[i - 2] + dp[i - 1]) % 15746;
    }
    printf("%d", dp[N]);
}