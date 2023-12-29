#include <bits/stdc++.h>
int i, j, n, p, pr[23000], cnt, flag, s, e, lim;
int main() {
    pr[0]=2;cnt=1;
    for (i = 3; i <= 250000; i++) {
        flag = 1;
        lim = (int)sqrt(i) + 1;
        for (j = 0; pr[j] <= lim; j++) {
            if(pr[j]==0)break;
            if (i % pr[j] == 0) {
                flag = 0;
                break;
            }
        }
        if (flag) pr[cnt++] = i;
    }
    while(1){
        scanf("%d", &n);
        if(n==0)break;
        s = n; e = 2*n; lim=0;
        for(i=0;i<cnt;i++){
            if(pr[i]<=s)continue;
            if(pr[i]<=e){
                lim++;
            }
            else break;
        }
        printf("%d\n", lim);
    }
}