#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, s;
    scanf("%d %d", &n, &s);
    vector<int> arr(n);
    for (auto &i : arr)
        scanf("%d", &i);
    int p1 = 0, p2 = 0;
    int cur = arr[0], ans = 1e9;
    while (p1 <= p2) {
        if (cur < s && p2 < n - 1) {
            p2 += 1;
            cur += arr[p2];
        } else if (cur >= s) {
            ans = min(ans, p2 - p1 + 1);
            cur -= arr[p1];
            p1 += 1;
        } else
            break;
    }
    printf("%d", ans == 1e9 ? 0 : ans);
}