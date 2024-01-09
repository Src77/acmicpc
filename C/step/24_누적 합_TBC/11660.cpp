#include <bits/stdc++.h>
using namespace std;
int N, M, arr[1025][1025], acs[1025][1025];
int x, y, x2, y2;
int main() {
    int i, j;
    scanf("%d %d", &N, &M);
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 1; i <= N; i++) {
        int tcnt = 0;
        for (j = 1; j <= N; j++) {
            tcnt += arr[i][j];
            acs[i][j] = acs[i - 1][j] + tcnt;
        }
    }
    for (i = 1; i <= M; i++) {
        scanf("%d %d %d %d", &x, &y, &x2, &y2);
        printf("%d\n", acs[x2][y2] - acs[x - 1][y2] - acs[x2][y - 1] + acs[x - 1][y - 1]);
    }
}