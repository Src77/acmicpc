#include <bits/stdc++.h>
int main() {
    long long i, j, n, p, pr[8000], cnt = 0, flag, lim;
    for (i = 2; i < 80000; i++) {
        flag = 1;
        for (j = 0; j < cnt; j++) {
            if (i % pr[j] == 0) {
                flag = 0;
                break;
            }
        }
        if (flag) pr[cnt++] = i;
    }
    for (scanf("%lld", &n); n > 0; n--) {
        scanf("%lld", &p);
        for (i=p;; i++) {
            lim = (int)sqrt(i) + 1;
            flag = 1;
            for (j = 0; pr[j] <= lim; j++) {
                if(i==pr[j]){
                    flag = 1;
                    break;
                }
                if (i % pr[j] == 0) {
                    flag = 0;
                    break;
                }
            }
            if (flag && i>1) {
                printf("%lld\n", i);
                break;
            }
        }
    }
}