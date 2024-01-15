#include <bits/stdc++.h>
using namespace std;
#define P 1000000007LL
long long fact_p(long long n) {
    long long ret = 1;
    for (; n > 0; n--) ret = (ret * n) % P;
    return ret;
}
long long pow_p(long long n, long long u) {
    long long i, pw[32], ms, ret;
    pw[0] = 1, pw[1] = n % P;
    for (i = 2; i < 32; i++) pw[i] = (pw[i - 1] * pw[i - 1]) % P;
    for (i = 1, ms = 1, ret = 1; ms <= u; i++, ms *= 2)
        if (ms & u) {
            ret = (ret * pw[i]) % P;
        }
    return ret;
}
long long comb_p(long long n, long long r) { return fact_p(n) * pow_p(fact_p(n - r), P - 2) % P * pow_p(fact_p(r), P - 2) % P; }
int main() {
    long long n, r;
    scanf("%lld %lld", &n, &r);
    printf("%lld", comb_p(n, r));
}