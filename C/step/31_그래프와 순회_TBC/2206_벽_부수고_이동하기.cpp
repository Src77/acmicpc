#include <bits/stdc++.h>
using namespace std;
int arr[1002][1002], cp[1002][1002];
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
struct cd{
    int first, second;
    bool vs;
    cd(int F, int S, bool V) : first(F), second(S), vs(V) {}
};
int main(){
    int i, j, N, M, ans = 10000000;
    scanf("%d %d", &N, &M);
    for(i=1;i<=N;i++){
        for(j=1;j<=M;j++){
            scanf("%1d", &arr[i][j]);
            arr[i][j] = 1 - arr[i][j];
            cp[i][j] = arr[i][j];
        }
    }
    queue<cd> Q;
    Q.push(cd(1, 1, false));
    arr[1][1] = 2;
    if(N == 1 && M == 1){
        printf("1");
        return 0;
    }
    while(!Q.empty()){
        int x, y;
        bool v;
        x = Q.front().first;
        y = Q.front().second;
        v = Q.front().vs;
        //printf("%d %d %d\n", x, y, v);
        Q.pop();
        if(!v){
            for(i=0;i<4;i++){
                if(arr[x + dx[i]][y + dy[i]] == 1){
                    Q.push(cd(x + dx[i], y + dy[i], false));
                    arr[x + dx[i]][y + dy[i]] = arr[x][y] + 1;
                }
                if(arr[x + dx[i]][y + dy[i]] == 0){
                    if(x + dx[i] < 1 || x + dx[i] > N)continue;
                    if(y + dy[i] < 1 || y + dy[i] > M)continue;
                    if(cp[x + dx[i]][y + dy[i]] == 0){
                        Q.push(cd(x + dx[i], y + dy[i], true));
                        cp[x + dx[i]][y + dy[i]] = arr[x][y] + 1;
                    }
                }
                if(x + dx[i] == N && y + dy[i] == M){
                    printf("%d", arr[x][y]);
                    return 0;
                }
            }
        }
        else{
            for(i=0;i<4;i++){
                if(cp[x + dx[i]][y + dy[i]] == 1){
                    Q.push(cd(x + dx[i], y + dy[i], true));
                    cp[x + dx[i]][y + dy[i]] = cp[x][y] + 1;
                }
                if(x + dx[i] == N && y + dy[i] == M){
                    printf("%d", cp[x][y]);
                    return 0;
                }
            }
        }
    }
    printf("-1");
}