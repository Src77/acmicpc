#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    scanf("%d", &n);
    vector<int> arr(n);
    for (auto &i : arr)
        scanf("%d", &i);
    sort(arr.begin(), arr.end());
    int ans = 2e9 + 1, r1 = 0, r2 = 0, p1 = 0, p2 = n - 1;
    while (p1 < p2) {
        int cur = arr[p1] + arr[p2];
        if (abs(cur) < ans) {
            r1 = p1, r2 = p2;
            ans = abs(cur);
        }
        if (cur > 0) {
            p2--;
        } else if (cur < 0) {
            p1++;
        } else {
            r1 = p1, r2 = p2;
            break;
        }
    }
    printf("%d %d", arr[r1], arr[r2]);
}