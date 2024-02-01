#include <bits/stdc++.h>
using namespace std;
bool dfs(vector<vector<int> > &G, vector<int> &color, int x, int c){
    bool ret = true;
    if(color[x] != 0){
        if(color[x] != c)return false;
        return true;
    }
    color[x] = c;
    for(auto &t : G[x]){
        ret = ret && dfs(G, color, t, 3 - c);
    }
    return ret;
}
int main(){
    int T;
    for(scanf("%d", &T);T>0;T--){
        int i, V, E, s, e;
        bool ans = true;
        scanf("%d %d", &V, &E);
        vector<vector<int> > G(V + 1, vector<int>(0));
        vector<int> color(V + 1, 0);
        for(i=0;i<E;i++){
            scanf("%d %d", &s, &e);
            G[s].push_back(e);
            G[e].push_back(s);
        }
        for(i=1;i<=V;i++){
            if(color[i] == 0){
                ans = ans && dfs(G, color, i, 1);
            }
        }
        ans ? printf("YES\n") : printf("NO\n");
    }
}