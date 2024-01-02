#include <bits/stdc++.h>
using namespace std;
void update(int idx, vector<int> &seg) {
    if (idx == 0) return;
    seg[idx] = seg[idx * 2] + seg[idx * 2 + 1];
    update(idx / 2, seg);
}
int order(int target, int p, vector<int> &seg) {
    int s = 2;
    while (1) {
        if (seg[s] == target && s >= p) {
            return s - p + 1;
        } else if (seg[s] < target) {
            target -= seg[s];
            s++;
        } else
            s *= 2;
    }
}
int main() {
    int N, K, p2, i, j, cur, target, il;
    scanf("%d %d", &N, &K);
    p2 = int(pow(2, ceil(log2(N))));
    vector<int> seg(p2 * 2);
    fill(seg.begin() + p2, seg.begin() + p2 + N, 1);
    for (i = p2 / 2; i > 0; i /= 2) {
        for (j = i; j < 2 * i; j++) seg[j] = seg[j * 2] + seg[j * 2 + 1];
    }  // init end.
    target = 1;
    if (N == 1) {
        printf("<1>");
        return 0;
    }
    for (i = 0; i < N; i++) {
        target += K - 1;
        target = target % seg[1];
        if (target == 0) target = seg[1];  // modular space : 1~K
        il = order(target, p2, seg);
        seg[p2 + il - 1] = 0;
        update((p2 + il - 1) / 2, seg);
        if (i == 0)
            printf("<%d, ", il);
        else if (i == N - 1)
            printf("%d>", il);
        else
            printf("%d, ", il);
    }
}