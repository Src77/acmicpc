#include <bits/stdc++.h>
using namespace std;
int N, K;
int W[100], V[100], dp[100000];
int main() {
    int i, j;
    scanf("%d %d", &N, &K);
    for (i = 0; i < N; i++) {
        scanf("%d %d", &W[i], &V[i]);
    }
    for (i = 0; i < N; i++) {
        for (j = K; j >= 0; j--) {
            if (j + W[i] > K) continue;
            dp[j + W[i]] = max(dp[j + W[i]], dp[j] + V[i]);
        }
    }
    printf("%d", *max_element(dp, dp + K + 1));
}