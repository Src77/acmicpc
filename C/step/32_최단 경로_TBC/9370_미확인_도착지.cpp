#include <bits/stdc++.h>
#define LIM 1e9
using namespace std;
void dijkstra(vector<vector<int>> &G, vector<int> &dis, int s, int n) {
    auto Compare = [](pair<int, int> &a, pair<int, int> &b) { return a.second == b.second ? a.first > b.first : a.second > b.second; };
    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(Compare)> pq(Compare); // first : index, second : cost
    dis[s] = 0;
    pq.push(pair(s, 0));
    while (!pq.empty()) {
        int idx = pq.top().first;
        int cost = pq.top().second;
        pq.pop();
        if (dis[idx] != cost)
            continue;
        for (int i = 0; i < n; i++) {
            if (G[idx][i] == LIM)
                continue;
            if (dis[i] > G[idx][i] + cost) {
                dis[i] = G[idx][i] + cost;
                pq.push(pair(i, dis[i]));
            }
        }
    }
}
int main() {
    int T;
    for (scanf("%d", &T); T > 0; T--) {
        int n, m, t, s, g, h;
        scanf("%d %d %d", &n, &m, &t);
        scanf("%d %d %d", &s, &g, &h);
        s--;
        g--;
        h--;
        vector<vector<int>> G(n, vector<int>(n, LIM));
        for (int i = 0; i < m; i++) {
            int st, ed, ct;
            scanf("%d %d %d", &st, &ed, &ct);
            G[st - 1][ed - 1] = ct;
            G[ed - 1][st - 1] = ct;
        }
        vector<int> cand(t);
        for (auto &i : cand) {
            scanf("%d", &i);
            i -= 1;
        }
        vector<int> dis_g(n, LIM); // in order to get s -> g
        vector<int> dis_h(n, LIM); // in order to get h -> t
        vector<int> dis_s(n, LIM); // in order to get s -> t
        dijkstra(G, dis_g, g, n);
        dijkstra(G, dis_h, h, n);
        dijkstra(G, dis_s, s, n);
        vector<int> ans;
        for (auto &t : cand) {
            if (dis_s[t] == LIM || dis_h[t] == LIM)
                continue;
            if (dis_s[g] + dis_g[h] + dis_h[t] != dis_s[t] && dis_s[h] + dis_h[g] + dis_g[t] != dis_s[t]) // s -> g + g -> h + h -> t != s -> t
                continue;
            ans.push_back(t + 1);
        }
        sort(ans.begin(), ans.end());
        for (auto &i : ans)
            printf("%d ", i);
        printf("\n");
    }
}