#include <bits/stdc++.h>
using namespace std;
int main(){
    int i, N, t;
    long long ans = 0;
    scanf("%d", &N);
    stack<pair<int, int> > st;
    for(i=0;i<N;i++){
        scanf("%d", &t);
        if(!st.empty() && t < st.top().first){
            if(st.size() > 0)ans += 1;
            st.push(pair(t, 1));
            continue;
        }
        while(!st.empty() && t > st.top().first){
            ans += st.top().second;
            st.pop();
        }
        if(!st.empty() && st.top().first == t){
            if(st.size() > 1)ans += 1;
            ans += st.top().second;
            st.top().second++;
        }
        else{
            if(st.size() > 0)ans += 1;
            st.push(pair(t, 1));
        }
    }
    printf("%lld", ans);
}