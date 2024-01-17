#include <bits/stdc++.h>
using namespace std;
int main() {
    long long i, N, s, e, mid;
    long long cnt, K;
    scanf("%lld %lld", &N, &K);
    vector<long long> arr(N);
    for (i = 0; i < N; i++) scanf("%lld", &arr[i]);
    s = 1, e = *max_element(arr.begin(), arr.end());
    while (s <= e) {
        cnt = 0, mid = (s + e) / 2;
        for (const auto &e : arr) cnt += e / mid;
        if (cnt >= K)
            s = mid + 1;
        else
            e = mid - 1;
    }
    printf("%lld", (s + e) / 2);
}