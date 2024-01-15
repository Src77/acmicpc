#include <bits/stdc++.h>
using namespace std;
using ip = pair<long long, long long>;
bool comp(const ip &a, const ip &b) { return a.second == b.second ? a.first < b.first : a.second < b.second; };
ip query(long long idx, long long s, long long e, long long l, long long r, vector<ip> &seg) {
    if (l > e || r < s) return ip(2e9, 2e9);
    if (l <= s && e <= r) return seg[idx];
    long long mid = (s + e) / 2;
    return min(query(idx * 2, s, mid, l, r, seg), query(idx * 2 + 1, mid + 1, e, l, r, seg), comp);
}
long long divq(long long p2, long long l, long long r, vector<ip> &seg) {
    if (l > r) return 0;
    if (l == r) return seg[p2 + l].second;
    auto m = query(1, 0, p2 - 1, l, r, seg);
    long long i = m.first, val = m.second;
    return max(max(divq(p2, l, i - 1, seg), divq(p2, i + 1, r, seg)), val * (r - l + 1));
}
int main() {
    long long i, j, N, t, ans = 0;
    while (1) {
        scanf("%lld", &N);
        if (N == 0) break;
        long long p2 = __int64_t(pow(2, ceil(log2(N))));
        vector<ip> seg(p2 * 2);
        for (i = 0; i < N; i++) {
            scanf("%lld", &t);
            seg[p2 + i] = ip(i, t);
        }
        for (i = N; i < p2; i++) seg[p2 + i] = ip(i, 0);
        for (i = p2 / 2; i > 0; i /= 2) {
            for (j = i; j < 2 * i; j++) {
                seg[j] = min(seg[j * 2], seg[j * 2 + 1], comp);
            }
        }
        printf("%lld\n", divq(p2, 0, p2 - 1, seg));
    }
}