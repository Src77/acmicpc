#include <bits/stdc++.h>
using namespace std;
int dp[30][30];
int bino(int n, int k) {
    if (n == k || k == 0) return 1;
    if (dp[n][k] != 0) return dp[n][k];
    dp[n][k] = bino(n - 1, k) + bino(n - 1, k - 1);
    return dp[n][k];
}
int main() {
    int T;
    for (scanf("%d", &T); T > 0; T--) {
        int n, k;
        scanf("%d %d", &k, &n);
        printf("%d\n", bino(n, k));
    }
}