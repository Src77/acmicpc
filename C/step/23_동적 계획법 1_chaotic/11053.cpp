#include <bits/stdc++.h>
using namespace std;
int dp[1000], arr[1000], N;
int main() {
    int i, j;
    scanf("%d", &N);
    for (i = 0; i < N; i++) scanf("%d", &arr[i]);
    for (i = N - 1; i >= 0; i--) {
        dp[i] = 1;
        for (j = i + 1; j < N; j++) {
            if (arr[j] > arr[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    printf("%d", *max_element(dp, dp + N));
}