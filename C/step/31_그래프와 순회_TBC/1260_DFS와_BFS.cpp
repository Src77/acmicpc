#include <bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int> > &graph, vector<bool> &visited, int &R){
    visited[R] = true;
    printf("%d ", R);
    for(auto &k : graph[R]){
        if(!visited[k])dfs(graph, visited, k);
    }
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
    vector<bool> visited(N+1, false);
    queue<int> Q;
    dfs(graph, visited, R);
    printf("\n");
    fill(visited.begin(), visited.end(), false);
    Q.push(R);
    visited[R] = true;
    while(!Q.empty()){
        int k = Q.front();
        Q.pop();
        printf("%d ", k);
        for(auto &m : graph[k]){
            if(!visited[m]){
                visited[m] = true;
                Q.push(m);
            }
        }
    }
}