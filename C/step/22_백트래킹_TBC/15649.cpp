#include <bits/stdc++.h>
using namespace std;
void P(int n, int l, vector<int> &cur, vector<bool> &sel){
    int i, j;
    if(l==0){
        for(auto p = cur.begin();p!=cur.end();p++)printf("%d ", *p);
        printf("\n");
        return;
    }
    for(i=1;i<=n;i++){
        if(sel[i]){
            sel[i] = false;
            cur.push_back(i);
            P(n, l-1, cur, sel);
            sel[i] = true;
            cur.pop_back();
        }
    }
}
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    vector<int> cur;
    vector<bool> sel(n+1);
    fill(sel.begin(), sel.end(), true);
    P(n, m, cur, sel);
}