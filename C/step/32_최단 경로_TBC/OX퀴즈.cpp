#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    for(scanf("%d", &T);T>0;T--){
        string S;
        cin>>S;
        int x = 1, ans = 0;
        for(auto &c : S){
            if(c == 'X')x = 1;
            else ans += x++;
        }
        printf("%d\n", ans);
    }
}