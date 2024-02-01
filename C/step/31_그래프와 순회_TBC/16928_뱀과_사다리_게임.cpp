#include <bits/stdc++.h>
using namespace std;
int main() {
    int i, N, M;
    scanf("%d %d", &N, &M);
    vector<int> V(101, 0);
    vector<pair<int, int> > E(N + M);
    for (auto &k : E) {
        scanf("%d %d", &k.first, &k.second);
    }
    auto comp = [](pair<int, int> &a, const pair<int, int> &b) { return a.first < b.first; };
    auto comp2 = [](pair<int, int> &a, const int &b) { return a.first < b; };
    sort(E.begin(), E.end(), comp);
    queue<pair<int, int> > Q;
    Q.push(pair(1, 0));
    V[1] = 1;
    while (!Q.empty()) {
        int k = Q.front().first;
        int n = Q.front().second;
        // printf("%d %d\n", k, n);
        Q.pop();
        if (k == 100) {
            printf("%d", n);
            break;
        }
        for (i = 1; i <= 6; i++) {
            if (k + i > 100) break;
            if (V[k + i]) continue;
            V[k + i] = n + 1;
            auto p = lower_bound(E.begin(), E.end(), k + i, comp2);
            if (p->first == k + i) {
                if (!V[p->second]) {
                    Q.push(pair(p->second, n + 1));
                    V[p->second] = n + 1;
                }
                continue;
            }
            Q.push(pair(k + i, n + 1));
        }
    }
}