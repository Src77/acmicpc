#include <bits/stdc++.h>
using namespace std;
int arr[31], n, m;
int main(){
    int i, j;
    set<int> dp;
    dp.insert(0);
    scanf("%d", &n);
    for(i=0;i<n;i++)scanf("%d", &arr[i]);
    for(i=0;i<n;i++){
        set<int> temp;
        for(auto &k : dp){
            temp.insert(k + arr[i]);
            temp.insert(k - arr[i]);
        }
        for(auto &k : temp){
            dp.insert(k);
        }
    }
    scanf("%d", &m);
    for(i=0;i<m;i++){
        scanf("%d", &j);
        if(dp.count(j) == 1)printf("Y ");
        else printf("N ");
    }
}