#include <cstdio>
#include <algorithm>
int main()
{
    int N, cnt = 0;
    scanf("%d", &N);
    if (N == 1 || N == 3)
    {
        printf("-1");
        return 0;
    }
    cnt = N / 5;
    N -= (N / 5) * 5;
    if (N % 2 == 0)
        cnt += N / 2;
    else{
        cnt += (N + 5) / 2 - 1;
    }
    printf("%d", cnt);
}