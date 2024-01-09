#include <bits/stdc++.h>
using namespace std;
int main() {
    long long dp[101];
    int N, T, i;
    dp[1] = dp[2] = dp[3] = 1;
    dp[4] = dp[5] = 2;
    for (i = 6; i <= 100; i++) dp[i] = dp[i - 1] + dp[i - 5];
    for (scanf("%d", &T); T > 0; T--) {
        scanf("%d", &i);
        printf("%lld\n", dp[i]);
    }
}