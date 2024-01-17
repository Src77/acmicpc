#include <bits/stdc++.h>
using namespace std;
int main() {
    int i, N, C, s, e, mid, cnt, tcnt, ans;
    scanf("%d %d", &N, &C);
    vector<int> arr(N), tr(N - 1);
    for (auto &r : arr) scanf("%d", &r);
    sort(arr.begin(), arr.end());
    for (i = 0; i < N - 1; i++) tr[i] = arr[i + 1] - arr[i];
    s = 1, e = *max_element(arr.begin(), arr.end());
    while (s <= e) {
        cnt = 1, tcnt = 0, mid = (s + e) / 2;
        for (const auto &u : tr) {
            tcnt += u;
            if (tcnt > mid) {
                cnt++;
                tcnt = 0;
            }
        }
        if (cnt >= C)
            s = mid + 1;
        else
            e = mid - 1;
    }
    ans = *max_element(arr.begin(), arr.end());
    mid = (s + e) / 2;
    tcnt = 0;
    for (const auto &u : tr) {
        tcnt += u;
        if (tcnt > mid) {
            ans = min(ans, tcnt);
            tcnt = 0;
        }
    }
    printf("%d", ans);
}