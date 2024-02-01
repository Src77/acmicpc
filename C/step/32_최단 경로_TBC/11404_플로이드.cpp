#include <bits/stdc++.h>
#define LIM 1e9
using namespace std;
int g[100][100];
int main(){
    int i, j, k, n, m;
    scanf("%d %d", &n, &m);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            g[i][j] = LIM;
        }
        g[i][i] = 0;
    }
    for(i=0;i<m;i++){
        int s, e, c;
        scanf("%d %d %d", &s, &e, &c);
        g[s-1][e-1] = min(c, g[s-1][e-1]);
    }
    for(k=0;k<n;k++){
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                g[i][j] = min(g[i][k] + g[k][j], g[i][j]);
            }
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ", g[i][j] != LIM ? g[i][j] : 0);
        }
        printf("\n");
    }
}