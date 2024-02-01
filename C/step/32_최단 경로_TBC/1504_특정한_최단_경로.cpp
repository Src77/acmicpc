#include <bits/stdc++.h>
#define INF 2e9
using namespace std;
int V, E;
auto Compare = [](pair<int, int> &a, pair<int, int> &b){
    return a.second == b.second ? a.first > b.first : a.second > b.second;
};
using PQ = priority_queue<pair<int, int>, vector<pair<int, int> >, decltype(Compare)>;
int dijkstra(vector<vector<pair<int, int> > > &G, int s, int e){
    int i;
    vector<int> ans(V+1);
    priority_queue<pair<int, int>, vector<pair<int, int> >, decltype(Compare)> pq(Compare);
    for(i=1;i<=V;i++){
        ans[i] = INF;
    }
    ans[s] = 0;
    pq.push(pair(s, 0));
    while(!pq.empty()){
        int s = pq.top().first;
        int d = pq.top().second;
        pq.pop();
        if(ans[s] != d)continue;
        for(auto &e : G[s]){
            if(d + e.second < ans[e.first]){
                ans[e.first] = d + e.second;
                pq.push(pair(e.first, ans[e.first]));
            }
        }
    }
    return ans[e];
}
int main(){
    int i, K, u, v, w;
    scanf("%d %d", &V, &E);
    vector<vector<pair<int, int> > > G(V + 1, vector<pair<int, int> >(0));
    priority_queue<pair<int, int>, vector<pair<int, int> >, decltype(Compare)> pq(Compare);
    for(i=0;i<E;i++){
        scanf("%d %d %d", &u, &v, &w);
        G[u].push_back(pair(v, w));
        G[v].push_back(pair(u, w));
    }
    int x, y;
    scanf("%d %d", &x, &y);
    long long s_x = dijkstra(G, 1, x);
    long long s_y = dijkstra(G, 1, y);
    long long x_y = dijkstra(G, x, y);
    long long y_e = dijkstra(G, y, V);
    long long x_e = dijkstra(G, x, V);
    long long ans = 3 * INF;
    if(s_x != INF && x_y != INF && y_e != INF)ans = s_x + x_y + y_e;
    //s -> x -> y -> e
    if(s_y != INF && x_y != INF && x_e != INF)ans = min(ans, s_y + x_y + x_e); 
    //s -> y -> x -> e
    if(ans == 3 * INF)printf("-1");
    else printf("%d", ans);
}