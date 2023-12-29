#include <cstdio>
#include <algorithm>
int main()
{
    int N, cnt = 0;
    scanf("%d", &N);
    if (N == 1 || N == 2 || N == 4 || N == 7)
    {
        printf("-1");
        return 0;
    }
    cnt = N / 5;
    N -= (N / 5) * 5;
    if (N % 3 == 0)
        cnt += N / 3;
    else if ((N + 5) % 3 == 0)
    {
        cnt += (N + 5) / 3 - 1;
    }
    else
    {
        cnt += (N + 10) / 3 - 2;
    }
    printf("%d", cnt);
}