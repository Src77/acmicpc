#include <bits/stdc++.h>
using namespace std;
int arr[27][27], ccnt[600];
int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};
void dfs(int x, int y, int c){
    int i;
    arr[x][y] = c;
    for(i=0;i<4;i++){
        if(arr[x + dx[i]][y + dy[i]] == 1)dfs(x + dx[i], y + dy[i], c);
    }
}
int main(){
    int i, j, N;
    scanf("%d", &N);
    for(i=1;i<=N;i++){
        for(j=1;j<=N;j++){
            char temp;
            do scanf("%c", &temp); while(temp != '0' && temp != '1');
            arr[i][j] = temp - '0';
        }
    }
    int cnt = 2;
    for(i=1;i<=N;i++){
        for(j=1;j<=N;j++){
            if(arr[i][j] == 1){
                dfs(i, j, cnt++);
            }
        }
    }
    for(i=1;i<=N;i++){
        for(j=1;j<=N;j++){
            ccnt[arr[i][j]]++;
        }
    }
    sort(ccnt + 2, ccnt + cnt);
    printf("%d\n", cnt - 2);
    for(i=2;i<cnt;i++)printf("%d\n", ccnt[i]);
}