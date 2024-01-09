#include <bits/stdc++.h>
using namespace std;
int N, K, c[10];
int main() {
    int i, j, ans = 0;
    scanf("%d %d", &N, &K);
    for (i = 0; i < N; i++) scanf("%d", &c[i]);
    for (i = N - 1; i >= 0; i--) {
        ans += K / c[i];
        K %= c[i];
        if (K == 0) break;
    }
    printf("%d", ans);
}