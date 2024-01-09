#include <bits/stdc++.h>
using namespace std;
bool mask[101][101][101];
int dp[101][101][101];
int *w_d(int a, int b, int c) { return &dp[a + 50][b + 50][c + 50]; }
bool *w_m(int a, int b, int c) { return &mask[a + 50][b + 50][c + 50]; }
int w(int a, int b, int c) {
    if (*w_m(a, b, c)) return *w_d(a, b, c);
    *w_m(a, b, c) = true;
    if (a <= 0 || b <= 0 || c <= 0)
        *w_d(a, b, c) = 1;
    else if (a > 20 || b > 20 || c > 20)
        *w_d(a, b, c) = w(20, 20, 20);
    else if (a < b && b < c)
        *w_d(a, b, c) = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
    else
        *w_d(a, b, c) = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
    return *w_d(a, b, c);
}
int main() {
    int a, b, c;
    while (1) {
        scanf("%d %d %d", &a, &b, &c);
        if (a == -1 && b == -1 && c == -1) break;
        printf("w(%d, %d, %d) = %d\n", a, b, c, w(a, b, c));
    }
}