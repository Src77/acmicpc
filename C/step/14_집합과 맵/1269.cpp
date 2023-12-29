#include <bits/stdc++.h>
using namespace std;
int main(){
    int i, n, m, t;
    scanf("%d %d", &n, &m);
    set<int> N, M, NM, MN;
    for(i=0;i<n;i++){
        scanf("%d", &t);
        N.insert(t);
    }
    for(i=0;i<m;i++){
        scanf("%d", &t);
        M.insert(t);
    }
    set_difference(N.begin(), N.end(), M.begin(), M.end(), inserter(NM, NM.begin()));
    set_difference(M.begin(), M.end(), N.begin(), N.end(), inserter(MN, MN.begin()));
    printf("%d", MN.size()+NM.size());
}