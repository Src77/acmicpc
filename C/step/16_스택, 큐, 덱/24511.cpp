#include <bits/stdc++.h>
using namespace std;
int main() {
    int i, j, N, M, flag;
    scanf("%d", &N);
    vector<int> qs(N), data(N);
    for (i = 0; i < N; i++) scanf("%d", &qs[i]);
    for (i = 0; i < N; i++) scanf("%d", &data[i]);
    scanf("%d", &M);
    vector<int> ci(M);
    for (i = 0; i < M; i++) scanf("%d", &ci[i]);
    for (i = 0, j = N - 1; j >= 0 && i < M; j--) {
        if (qs[j] == 1) continue;
        i++;
        printf("%d ", data[j]);
    }
    for (j = 0; i < M; i++, j++) {
        printf("%d ", ci[j]);
    }
}