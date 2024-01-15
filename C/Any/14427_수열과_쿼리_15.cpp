#include <bits/stdc++.h>
using namespace std;
int N, M;
bool comp(const pair<int, int> &a, const pair<int, int> &b) { return a.second < b.second; }
void update(int idx, vector<pair<int, int> > &seg) {
    idx /= 2;
    if (idx == 0) return;
    seg[idx] = min(seg[idx * 2], seg[idx * 2 + 1], comp);
    update(idx, seg);
}
int main() {
    int i, j, t, v, p2;
    scanf("%d", &N);
    p2 = int(pow(2, ceil(log2(N))));
    vector<pair<int, int> > seg(p2 * 2);
    for (i = 0; i < N; i++) {
        scanf("%d", &t);
        seg[p2 + i].first = i + 1;
        seg[p2 + i].second = t;
    }
    for (i = N; i < p2; i++) {
        seg[p2 + i].first = -1;
        seg[p2 + i].second = 2e9;
    }
    for (i = p2 / 2; i > 0; i /= 2) {
        for (j = i; j < 2 * i; j++) {
            seg[j] = min(seg[j * 2], seg[j * 2 + 1], comp);
        }
    }
    for (scanf("%d", &M); M > 0; M--) {
        scanf("%d", &t);
        if (t == 2) {
            printf("%d\n", seg[1].first);
        } else {
            scanf("%d %d", &i, &v);
            seg[p2 + i - 1].second = v;
            update(p2 + i - 1, seg);
        }
    }
}