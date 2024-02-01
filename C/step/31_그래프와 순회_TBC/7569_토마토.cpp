#include <bits/stdc++.h>
using namespace std;
struct cd{
    int x, y, z;
    cd(int X, int Y, int Z) : x(X), y(Y), z(Z) {}
};
int arr[102][102][102];
int dx[6] = {1, 0, -1, 0, 0, 0};
int dy[6] = {0, 1, 0, -1, 0, 0};
int dz[6] = {0, 0, 0, 0, 1, -1};
int main(){
    int k, i, j, M, N, H;
    scanf("%d %d %d", &M, &N, &H);
    queue<cd> Q;
    for(k=1;k<=H;k++){
        for(i=1;i<=N;i++){
            for(j=1;j<=M;j++){
                scanf("%d", &arr[k][i][j]);
                if(arr[k][i][j]==1)Q.push(cd(k, i, j));
            }
        }
    }
    while(!Q.empty()){
        cd t = Q.front();
        Q.pop();
        for(i=0;i<6;i++){
            cd d(t.x + dx[i], t.y + dy[i], t.z + dz[i]);
            if(d.x < 1 || d.x > H || d.y < 1 || d.y > N || d.z < 1 || d.z > M)continue;
            if(arr[d.x][d.y][d.z] == 0){
                arr[d.x][d.y][d.z] = arr[t.x][t.y][t.z] + 1;
                Q.push(d);
            }
        }
    }
    int ans = 0;
    for(k=1;k<=H;k++){
        for(i=1;i<=N;i++){
            for(j=1;j<=M;j++){
                if(arr[k][i][j] == 0){
                    printf("-1");
                    return 0;
                }
                ans = max(ans, arr[k][i][j]);
            }
        }
    }
    printf("%d", ans-1);
}