#include <bits/stdc++.h>
#define LIM 1e8
using namespace std;
struct bus {
    int s, e;
    long long c;
};
int main() {
    int i, N, M;
    scanf("%d %d", &N, &M);
    vector<bus> E(M);
    vector<long long> dis(N + 1);
    for (auto &t : E) {
        scanf("%d %d %lld", &t.s, &t.e, &t.c);
    }
    for (auto &t : dis) t = LIM;
    dis[1] = 0LL;
    for (i = 0; i < N; i++) {
        for (auto &t : E) {
            if (dis[t.s] == LIM) continue;
            if (dis[t.e] > dis[t.s] + t.c) {
                dis[t.e] = dis[t.s] + t.c;
            }
        }
    }
    for (auto &t : E) {
        if (dis[t.s] == LIM) continue;
        if (dis[t.e] > dis[t.s] + t.c) {
            printf("-1");
            return 0;
        }
    }
    for (i = 2; i <= N; i++) {
        if (dis[i] == LIM)
            printf("-1\n");
        else
            printf("%lld\n", dis[i]);
    }
}