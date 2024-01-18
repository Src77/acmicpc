#include <bits/stdc++.h>
using namespace std;
int n, m;
void P(int cnt, multiset<int> &arr, vector<int> &vs){
    int i;
    set<int> searched;
    if(cnt == m){
        for(auto &k : vs)printf("%d ", k);
        printf("\n");
        return;
    }
    for(auto &k : arr){
        if(searched.count(k) == 1)continue;
        searched.insert(k);
        if(arr.count(k) == count(vs.begin(), vs.end(), k))continue;
        vs.push_back(k);
        P(cnt+1, arr, vs);
        vs.pop_back();
    }
}
int main(){
    int i, j;
    scanf("%d %d", &n, &m);
    multiset<int> arr;
    vector<int> vs;
    for(i=0;i<n;i++){
        scanf("%d", &j);
        arr.insert(j);
    }
    P(0, arr, vs);
}