#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int> pr;
    for (int i = 2; i <= 5e6; i++) {
        bool flag = true;
        int lim = int(sqrt(i)) + 1;
        for (auto &j : pr) {
            if (j > lim)
                break;
            if (i % j == 0) {
                flag = false;
                break;
            }
        }
        if (flag)
            pr.push_back(i);
    }
    int n, p1, p2, cur, ans;
    scanf("%d", &n);
    p1 = 0, p2 = 0, ans = 0;
    cur = pr[0];
    while (p1 <= p2) {
        if (cur == n) {
            ans++;
        }
        if (cur < n) {
            p2++;
            cur += pr[p2];
        } else if (cur >= n) {
            cur -= pr[p1];
            p1++;
        }
    }
    printf("%d", ans);
}