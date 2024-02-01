#include <bits/stdc++.h>
using namespace std;
struct cd{
    int x, y;
    cd(int X, int Y) : x(X), y(Y) {}
};
int arr[1002][1002], dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
int main(){
    int i, j, M, N;
    scanf("%d %d", &M, &N);
    queue<cd> Q;
    for(i=1;i<=N;i++){
        for(j=1;j<=M;j++){
            scanf("%d", &arr[i][j]);
            if(arr[i][j]==1)Q.push(cd(i, j));
        }
    }
    while(!Q.empty()){
        cd t = Q.front();
        Q.pop();
        for(i=0;i<4;i++){
            cd d(t.x + dx[i], t.y + dy[i]);
            if(d.x < 1 || d.x > N || d.y < 1 || d.y > M)continue;
            if(arr[d.x][d.y] == 0){
                arr[d.x][d.y] = arr[t.x][t.y] + 1;
                Q.push(d);
            }
        }
    }
    int ans = 0;
    for(i=1;i<=N;i++){
        for(j=1;j<=M;j++){
            if(arr[i][j] == 0){
                printf("-1");
                return 0;
            }
            ans = max(ans, arr[i][j]);
        }
    }
    printf("%d", ans-1);
}