#include <bits/stdc++.h>
using namespace std;
int rc[1000], gc[1000], bc[1000];
int rd[1000], gd[1000], bd[1000];
int N;
int main() {
    int i;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d %d %d", &rc[i], &gc[i], &bc[i]);
    }
    rd[0] = rc[0], gd[0] = gc[0], bd[0] = bc[0];
    for (i = 1; i < N; i++) {
        rd[i] = min(gd[i - 1], bd[i - 1]) + rc[i];
        gd[i] = min(rd[i - 1], bd[i - 1]) + gc[i];
        bd[i] = min(rd[i - 1], gd[i - 1]) + bc[i];
    }
    printf("%d", min({rd[N - 1], gd[N - 1], bd[N - 1]}));
}