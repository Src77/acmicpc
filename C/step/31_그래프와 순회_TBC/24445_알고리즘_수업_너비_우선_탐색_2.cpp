#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, M, R, i, rk = 1;
    scanf("%d %d %d", &N, &M, &R);
    vector<vector<int> > graph(N+1, vector<int>(0));
    for(i=0;i<M;i++){
        int s, e;
        scanf("%d %d", &s, &e);
        graph[s].push_back(e);
        graph[e].push_back(s);
    }
    for(i=1;i<=N;i++){
        sort(graph[i].begin(), graph[i].end(), greater<int>());
    }
    vector<bool> visited(N+1);
    vector<int> rank(N+1);
    queue<int> Q;
    fill(visited.begin(), visited.end(), false);
    fill(rank.begin(), rank.end(), 0);
    Q.push(R);
    visited[R] = true;
    while(!Q.empty()){
        int k = Q.front();
        Q.pop();
        rank[k] = rk++;
        for(auto &m : graph[k]){
            if(!visited[m]){
                visited[m] = true;
                Q.push(m);
            }
        }
    }
    for(i=1;i<=N;i++)printf("%d\n", rank[i]);
}