#include <bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int> > &graph, vector<bool> &visited, int &R, vector<int> &rank){
    static int rk;
    visited[R] = true;
    if(!rank[R])rank[R] = ++rk;
    for(auto &k : graph[R]){
        if(!visited[k])dfs(graph, visited, k, rank);
    }
    //visited[R] = false;
}
int main(){
    int N, M, R, i;
    scanf("%d %d %d", &N, &M, &R);
    vector<vector<int> > graph(N+1, vector<int>(0));
    for(i=0;i<M;i++){
        int s, e;
        scanf("%d %d", &s, &e);
        graph[s].push_back(e);
        graph[e].push_back(s);
    }
    for(i=1;i<=N;i++){
        sort(graph[i].begin(), graph[i].end());
    }
    vector<bool> visited(N+1);
    vector<int> rank(N+1);
    fill(visited.begin(), visited.end(), false);
    fill(rank.begin(), rank.end(), 0);
    dfs(graph, visited, R, rank);
    for(i=1;i<=N;i++)printf("%d\n", rank[i]);
}