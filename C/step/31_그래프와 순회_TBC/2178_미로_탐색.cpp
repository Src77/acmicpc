#include <bits/stdc++.h>
using namespace std;
int arr[102][102];
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
int main(){
    int i, j, N, M;
    scanf("%d %d", &N, &M);
    for(i=1;i<=N;i++){
        for(j=1;j<=M;j++){
            scanf("%1d", &arr[i][j]);
        }
    }
    queue<pair<int, int> > Q;
    Q.push(pair(1, 1));
    arr[1][1] = 2;
    while(!Q.empty()){
        int x, y;
        x = Q.front().first;
        y = Q.front().second;
        Q.pop();
        for(i=0;i<4;i++){
            if(arr[x + dx[i]][y + dy[i]] == 1){
                Q.push(pair(x + dx[i], y + dy[i]));
                arr[x + dx[i]][y + dy[i]] = arr[x][y] + 1;
            }
            if(x + dx[i] == N && y + dy[i] == M){
                printf("%d", arr[x][y]);
                return 0;
            }
        }
    }
}