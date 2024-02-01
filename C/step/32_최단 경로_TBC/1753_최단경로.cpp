#include <bits/stdc++.h>
#define INF 2e9
using namespace std;
int main(){
    int i, V, E, K, u, v, w;
    scanf("%d %d %d", &V, &E, &K);
    vector<vector<pair<int, int> > > G(V + 1, vector<pair<int, int> >(0));
    auto Compare = [](pair<int, int> &a, pair<int, int> &b){
        return a.second == b.second ? a.first > b.first : a.second > b.second;
    };
    priority_queue<pair<int, int>, vector<pair<int, int> >, decltype(Compare)> pq(Compare);
    for(i=0;i<E;i++){
        scanf("%d %d %d", &u, &v, &w);
        G[u].push_back(pair(v, w));
    }
    vector<int> ans(V+1);
    for(i=1;i<=V;i++){
        ans[i] = INF;
    }
    ans[K] = 0;
    pq.push(pair(K, 0));
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
    for(i=1;i<=V;i++){
        if(ans[i] == INF)printf("INF\n");
        else printf("%d\n", ans[i]);
    }
}