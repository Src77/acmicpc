#include <bits/stdc++.h>
using namespace std;
int i, j, n, p, pr[80000], cnt, flag, ans, lim, T;
int main() {
    pr[0] = 2;
    cnt = 1;
    for (i = 3; i <= 1000000; i++) {
        flag = 1;
        lim = (int)sqrt(i) + 1;
        for (j = 0; pr[j] <= lim; j++) {
            if (pr[j] == 0) break;
            if (i % pr[j] == 0) {
                flag = 0;
                break;
            }
        }
        if (flag) pr[cnt++] = i;
    }
    for (scanf("%d", &T); T > 0; T--) {
        scanf("%d", &n);
        ans = 0;
        for (i = 0; pr[i] <= n / 2; i++) {
            if (binary_search(pr, pr + 78498, n - pr[i])) ans++;
        }
        printf("%d\n", ans);
    }
}