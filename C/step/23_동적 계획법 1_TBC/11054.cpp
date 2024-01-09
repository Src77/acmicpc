#include <bits/stdc++.h>
using namespace std;
int dp1[1000], dp2[1000], arr[1000], N, ans;
int main() {
    int i, j;
    scanf("%d", &N);
    for (i = 0; i < N; i++) scanf("%d", &arr[i]);
    for (i = N - 1; i >= 0; i--) {
        dp1[i] = 1;
        for (j = i + 1; j < N; j++) {
            if (arr[j] < arr[i]) {
                dp1[i] = max(dp1[i], dp1[j] + 1);  // decreasing subsequence from i to N
            }
        }
    }
    for (i = 0; i < N; i++) {
        dp2[i] = 1;
        for (j = i - 1; j >= 0; j--) {
            if (arr[j] < arr[i]) {
                dp2[i] = max(dp2[i], dp2[j] + 1);  // increasing subsequence from 0 to i
            }
        }
    }
    for (i = 0; i < N; i++) {
        ans = max(ans, dp1[i] + dp2[i] - 1);
    }
    printf("%d", ans);
}