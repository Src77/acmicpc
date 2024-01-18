#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int i, N, T;
    long long ans, k;
    for(scanf("%d", &T);T>0;T--){
        ans = 0;
        scanf("%d", &N);
        auto comp = [](ll& a, ll& b){return a > b;};
        priority_queue<ll, vector<ll>, decltype(comp)> pq(comp);
        for(i=0;i<N;i++){
            scanf("%lld", &k);
            pq.push(k);
        }
        for(i=0;i<N-1;i++){
            k = pq.top();
            pq.pop();
            k += pq.top();
            pq.pop();
            ans += k;
            pq.push(k);
        }
        printf("%lld\n", ans);
    }
}