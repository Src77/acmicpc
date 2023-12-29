#include <cstdio>
int i, m, mi, t;
int main()
{
    for (i = 0; i < 81; i++)
    {
        scanf("%d", &t);
        if (m <= t)
        {
            m = t;
            mi = i;
        }
    }
    printf("%d\n%d %d", m, mi / 9 + 1, mi % 9 + 1);
}