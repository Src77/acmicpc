#include <bits/stdc++.h>
using namespace std;
void P(int n, int l, int ub, vector<int> &cur, set<int> &arr){
    int i, j;
    if(l==0){
        for(auto &k: cur){
            auto p = arr.begin();
            for(i=0;i<k;i++)p = next(p);
            printf("%d ", *p);
        }
        printf("\n");
        return;
    }
    for(i=ub;i<=n;i++){
        cur.push_back(i - 1);
        P(n, l-1, i, cur, arr);
        cur.pop_back();
    }
}
int main(){
    int i, n, m, t;
    scanf("%d %d", &n, &m);
    vector<int> cur;
    set<int> arr;
    for(i=0;i<n;i++){
        scanf("%d", &t);
        arr.insert(t);
    }
    P(arr.size(), m, 1, cur, arr);
}