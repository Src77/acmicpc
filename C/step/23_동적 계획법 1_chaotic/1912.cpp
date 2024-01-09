#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, i;
    scanf("%d", &N);
    vector<int> dp(N), arr(N);
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);
    }
    dp[0] = arr[0];
    for (i = 1; i < N; i++) {
        dp[i] = max(dp[i - 1] + arr[i], arr[i]);
    }
    printf("%d", *max_element(dp.begin(), dp.end()));
}