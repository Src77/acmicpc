#include <bits/stdc++.h>
using namespace std;
int dp[1001][1001];
int main() {
    int i, j;
    string a, b;
    cin >> a >> b;
    for (i = 1; i <= a.length(); i++) {
        for (j = 1; j <= b.length(); j++) {
            if (a[i - 1] == b[j - 1]) {
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j - 1] + 1);
            } else
                dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
        }
    }
    printf("%d", dp[a.length()][b.length()]);
}