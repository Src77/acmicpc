#include <bits/stdc++.h>
using namespace std;
void P(int n, int l, int ub, vector<int> &cur, vector<int> &arr){
    int i, j;
    if(l==0){
        for(auto p = cur.begin();p!=cur.end();p++)printf("%d ", arr[*p]);
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
    int i, n, m;
    scanf("%d %d", &n, &m);
    vector<int> cur, arr(n);
    for(i=0;i<n;i++)scanf("%d", &arr[i]);
    sort(arr.begin(), arr.end());
    P(n, m, 1, cur, arr);
}