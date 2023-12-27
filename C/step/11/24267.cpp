#include <cstdio>
int main()
{
    long long n, cnt = 0, i;
    scanf("%lld", &n);
    for (i = 1; i <= n - 2; i++)
        cnt += (n - i - 1) * (n - i) / 2;
    printf("%lld\n3", cnt);
}