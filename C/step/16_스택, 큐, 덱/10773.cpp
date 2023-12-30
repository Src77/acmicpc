#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, t;
    vector<int> V;
    for(scanf("%d", &N);N>0;N--){
        scanf("%d", &t);
        if(t==0){
            V.erase(V.end()-1);
        }
        else V.push_back(t);
    }
    printf("%d", reduce(V.begin(), V.end()));
}