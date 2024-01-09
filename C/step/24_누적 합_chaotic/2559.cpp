#include <bits/stdc++.h>
using namespace std;
int N, K;
int arr[100001], acs[100001];
int main() {
    int i, ans = -100000000;
    scanf("%d %d", &N, &K);
    for (i = 1; i <= N; i++) scanf("%d", &arr[i]);
    for (i = 1; i <= N; i++) acs[i] = acs[i - 1] + arr[i];
    for (i = 1; i <= N - K + 1; i++) {
        ans = max(ans, acs[i + K - 1] - acs[i - 1]);
    }
    printf("%d", ans);
}