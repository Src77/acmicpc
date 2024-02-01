#include <bits/stdc++.h>
using namespace std;
struct cd{
    int x;
    int y;
    bool operator ==(const cd &a) const{
        return x == a.x && y == a.y;
    }
};
int dx[8] = {1, 2, 2, 1, -1, -2, -2, -1};
int dy[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int main(){
    int T;
    for(scanf("%d", &T);T>0;T--){
        int i, j, arr[301][301], l;
        scanf("%d", &l);
        for(i=1;i<=l;i++){
            for(j=1;j<=l;j++){
                arr[i][j] = 0;
            }
        }
        cd s, e;
        scanf("%d %d", &s.x, &s.y);
        scanf("%d %d", &e.x, &e.y);
        s.x += 1, s.y += 1, e.x += 1, e.y += 1;
        queue<cd> Q;
        Q.push(s);
        while(!Q.empty()){
            cd t = Q.front();
            Q.pop();
            if(t == e){
                printf("%d\n", arr[t.x][t.y]);
                break;
            }
            for(i=0;i<8;i++){
                cd d;
                d.x = t.x + dx[i];
                d.y = t.y + dy[i];
                if(d.x < 1 || d.x > l || d.y < 1 || d.y > l)continue;
                if(arr[d.x][d.y] == 0){
                    arr[d.x][d.y] = arr[t.x][t.y] + 1;
                    Q.push(d);
                }
            }
        }
    }
}