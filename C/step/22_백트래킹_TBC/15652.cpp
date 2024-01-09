#include <bits/stdc++.h>
using namespace std;
void P(int n, int l, int ub, vector<int> &cur){
    int i, j;
    if(l==0){
        for(auto p = cur.begin();p!=cur.end();p++)printf("%d ", *p);
        printf("\n");
        return;
    }
    for(i=ub;i<=n;i++){
        cur.push_back(i);
        P(n, l-1, i, cur);
        cur.pop_back();
    }
}
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    vector<int> cur;
    P(n, m, 1, cur);
}