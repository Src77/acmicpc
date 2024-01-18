#include <bits/stdc++.h>
using namespace std;
int n, m;
void P(int cnt, vector<int> &arr, vector<int> &vs){
    int i;
    if(cnt == m){
        for(auto &k : vs)printf("%d ", k);
        printf("\n");
        return;
    }
    for(i=0;i<n;i++){
        if(find(vs.begin(), vs.end(), arr[i]) != vs.end())continue;
        vs.push_back(arr[i]);
        P(cnt+1, arr, vs);
        vs.pop_back();
    }
}
int main(){
    int i, j;
    scanf("%d %d", &n, &m);
    vector<int> arr(n), vs;
    for(i=0;i<n;i++)scanf("%d", &arr[i]);
    sort(arr.begin(), arr.end());
    P(0, arr, vs);
}