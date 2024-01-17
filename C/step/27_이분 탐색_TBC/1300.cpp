#include <bits/stdc++.h>
using namespace std;
long long func(long long t, long long N) {
    long long i, ans = 0, lim = sqrt(t);
    for (i = 1; i <= lim; i++) {
        ans += 2 * (min(t / i, N) - i);
    }
    return ans + lim;
}
int main() {
    long long i, N, s, e, mid, lim;
    long long cnt, k, r;
    scanf("%lld %lld", &N, &k);
    s = 1, e = N * N;
    while (s < e) {
        mid = (s + e) / 2;
        cnt = func(mid, N);
        if (cnt < k)
            s = mid + 1;
        else
            e = mid;
    }
    printf("%lld", e);
}