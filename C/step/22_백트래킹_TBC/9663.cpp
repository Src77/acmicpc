#include <bits/stdc++.h>
using namespace std;
int cnt;
void n_queen(int n, int x, vector<bool> &y_l, vector<bool> &p, vector<bool> &m){
    int y;
    if(x==n){
        cnt++;
        return;
    }
    for(y=0;y<n;y++){
        if(y_l[y] || p[x + y] || m[x - y + n - 1])continue;
        y_l[y] = p[x + y] = m[x - y + n - 1] = true;
        n_queen(n, x+1, y_l, p, m);
        y_l[y] = p[x + y] = m[x - y + n - 1] = false;
    }
}
int main(){
    int N;
    scanf("%d", &N);
    vector<bool> y_l(N), p(2*N-1), m(2*N-1);
    fill(y_l.begin(), y_l.end(), false);
    fill(p.begin(), p.end(), false);
    fill(m.begin(), m.end(), false);
    n_queen(N, 0, y_l, p, m);
    printf("%d", cnt);
}