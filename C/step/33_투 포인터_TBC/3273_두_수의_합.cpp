#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, x;
    scanf("%d", &n);
    vector<int> arr(n);
    for (auto &i : arr)
        scanf("%d", &i);
    scanf("%d", &x);
    if (n == 1) {
        printf("0");
        return 0;
    }
    int p1 = 0, p2 = n - 1, ans = 0;
    sort(arr.begin(), arr.end());
    while (p1 < p2) {
        int t = arr[p1] + arr[p2];
        if (t == x)
            ans++;
        if (t >= x)
            p2--;
        else
            p1++;
    }
    printf("%d", ans);
}