#include <bits/stdc++.h>
using namespace std;
long long t, cnt, mds[1001], N, M;
long long ans;
int main() {
    int i;
    scanf("%lld %lld", &N, &M);
    mds[0] = 1;
    for (i = 0; i < N; i++) {
        scanf("%lld", &t);
        cnt = (cnt + t) % M;
        mds[cnt]++;
    }
    for (i = 0; i < M; i++) {
        ans += (mds[i] * (mds[i] - 1)) / 2;
    }
    printf("%lld", ans);
}