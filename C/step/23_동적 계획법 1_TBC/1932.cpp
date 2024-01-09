#include <bits/stdc++.h>
using namespace std;
int tri[500][500], N, dp[500][500];
int main() {
    int i, j;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        for (j = 0; j <= i; j++) {
            scanf("%d", &tri[i][j]);
        }
    }
    dp[0][0] = tri[0][0];
    for (i = 0; i < N; i++) {
        for (j = 0; j <= i; j++) {
            if (j == 0)
                dp[i][j] = dp[i - 1][j] + tri[i][j];
            else
                dp[i][j] = max(dp[i - 1][j - 1], dp[i - 1][j]) + tri[i][j];
        }
    }
    printf("%d", *max_element(dp[N - 1], dp[N - 1] + N));
}