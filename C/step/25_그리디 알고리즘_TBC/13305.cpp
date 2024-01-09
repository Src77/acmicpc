#include <bits/stdc++.h>
using namespace std;
int main() {
    long long N, cur, i, ans;
    scanf("%lld", &N);
    vector<long long> cost(N), dis(N - 1);
    for (i = 0; i < N - 1; i++) scanf("%lld", &dis[i]);
    for (i = 0; i < N; i++) scanf("%lld", &cost[i]);
    cur = cost[0], ans = 0;
    for (i = 0; i < N - 1; i++) {
        cur = min(cur, cost[i]);
        ans += cur * dis[i];
    }
    printf("%lld", ans);
}