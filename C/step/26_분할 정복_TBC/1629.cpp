#include <bits/stdc++.h>
using namespace std;
int main() {
    long long a, b, c, pw[32], i, cur, bs;
    scanf("%lld %lld %lld", &a, &b, &c);
    a %= c;
    pw[0] = bs = cur = 1;
    pw[1] = a;
    for (i = 2; i < 32; i++) pw[i] = (pw[i - 1] * pw[i - 1]) % c;
    for (i = 1; bs <= b; i++) {
        if (b & bs) {
            cur = (cur * pw[i]) % c;
        }
        bs *= 2;
    }
    printf("%lld", cur);
}