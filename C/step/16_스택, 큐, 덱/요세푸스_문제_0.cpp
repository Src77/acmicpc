#include <bits/stdc++.h>
using namespace std;
void update(int idx, vector<int> &seg) {
    seg[idx] = seg[idx * 2] + seg[idx * 2 + 1];
    update(idx / 2, seg);
}
int main() {
    int N, K, p2, i, j;
    scanf("%d %d", &N, &K);
    p2 = int(pow(2, ceil(log2(N))));
    vector<int> seg(p2 * 2);
    fill(seg.begin() + p2, seg.begin() + p2 + N, 1);
    for (i = p2 / 2; i > 0; i /= 2) {
        for (j = i; j < 2 * i; j++) seg[j] = seg[j * 2] + seg[j * 2 + 1];
    }  // init end.
}