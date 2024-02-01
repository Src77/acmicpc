#include <bits/stdc++.h>
using namespace std;
#define LIM 200001
int main(){
    int N, K;
    scanf("%d %d", &N, &K);
    vector<int> V(LIM+1, 0);
    queue<pair<int, int> > Q;
    Q.push(pair(0, N));
    while(1){
        int n = Q.front().first;
        int x = Q.front().second;
        if(x==K){
            printf("%d", n);
            return 0;
        }
        Q.pop();
        if(x-1>=0 && !V[x-1]){
            Q.push(pair(n+1, x-1));
            V[x-1] = 1;
        }
        if(x+1<=LIM && !V[x+1]){
            Q.push(pair(n+1, x+1));
            V[x+1] = 1;
        }
        if(2*x<=LIM && !V[2*x]){
            Q.push(pair(n+1, 2*x));
            V[2*x] = 1;
        }
    }
}