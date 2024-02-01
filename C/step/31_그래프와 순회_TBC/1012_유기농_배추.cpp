#include <bits/stdc++.h>
using namespace std;
int arr[52][52];
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
void dfs(int x, int y, int c){
    int i;
    arr[x][y] = c;
    for(i=0;i<4;i++){
        if(arr[x + dx[i]][y + dy[i]] == 1)dfs(x + dx[i], y + dy[i], c);
    }
}
int main(){
    int T;
    for(scanf("%d", &T);T>0;T--){
        int i, j, N, M, K;
        scanf("%d %d %d", &N, &M, &K);
        for(i=0;i<=N+1;i++){
            for(j=0;j<=M+1;j++){
                arr[i][j] = 0;
            }
        }
        for(i=0;i<K;i++){
            int x, y;
            scanf("%d %d", &x, &y);
            arr[x+1][y+1] = 1;
        }
        int cnt = 2;
        for(i=1;i<=N;i++){
            for(j=1;j<=M;j++){
                if(arr[i][j] == 1){
                    dfs(i, j, cnt++);
                }
            }
        }
        printf("%d\n", cnt - 2);
    }
}