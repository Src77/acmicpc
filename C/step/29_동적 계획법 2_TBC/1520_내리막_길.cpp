#include <bits/stdc++.h>
using namespace std;
int arr[502][502], dp[502][502][4], n, m;
//way 0 : right, 1 : up, 2 : left, 3 : down
int dfs(int x, int y, int from){
    if(x==0 || y==0 || x > n || y > m)return 0;
    if(from == 0){
        if(dp[x][y][0] < 0){
            if(arr[x][y] < arr[x][y+1])
                dp[x][y][0] = dfs(x, y+1, 0) + dfs(x, y+1, 1) + dfs(x, y+1, 3);
            else dp[x][y][0] = 0;
        }
        return dp[x][y][0];
    }
    if(from == 1){
        if(dp[x][y][1] < 0){
            if(arr[x][y] < arr[x-1][y])
                dp[x][y][1] = dfs(x-1, y, 0) + dfs(x-1, y, 1) + dfs(x-1, y, 2);
            else dp[x][y][1] = 0;
        }
        return dp[x][y][1];
    }
    if(from == 2){
        if(dp[x][y][2] < 0){
            if(arr[x][y] < arr[x][y-1])
                dp[x][y][2] = dfs(x, y-1, 1) + dfs(x, y-1, 2) + dfs(x, y-1, 3);
            else dp[x][y][2] = 0;
        }
        return dp[x][y][2];
    }
    if(from == 3){
        if(dp[x][y][3] < 0){
            if(arr[x][y] < arr[x+1][y])
                dp[x][y][3] = dfs(x+1, y, 0) + dfs(x+1, y, 2) + dfs(x+1, y, 3);
            else dp[x][y][3] = 0;
        }
        return dp[x][y][3];
    }
}
int main(){
    int i, j;
    scanf("%d %d", &n, &m);
    for(i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            scanf("%d", &arr[i][j]);
            dp[i][j][0] = dp[i][j][1] = dp[i][j][2] = dp[i][j][3] = -1;
        }
    }
    dp[1][1][0] = 0;
    dp[1][1][1] = 1;
    dp[1][1][2] = 0;
    dp[1][1][3] = 0;
    printf("%d", dfs(n, m, 2) + dfs(n, m, 1));
}