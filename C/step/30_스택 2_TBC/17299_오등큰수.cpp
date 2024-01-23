#include <bits/stdc++.h>
using namespace std;
int main(){
    int i, N;
    scanf("%d", &N);
    vector<int> arr(N), ans(N), mez(1000001), tarr(N);
    fill(ans.begin(), ans.end(), -1);
    fill(mez.begin(), mez.end(), 0);
    for(auto &t: tarr){
        scanf("%d", &t);
        mez[t]++;
    }
    for(i=0;i<N;i++){
        arr[i] = mez[tarr[i]];
    }
    stack<pair<int, int> > st;
    for(i=0;i<N;i++){
        while(!st.empty() && arr[i] > st.top().second){
            ans[st.top().first] = tarr[i];
            st.pop();
        }
        st.push(pair(i, arr[i]));
    }
    for(auto &t: ans)printf("%d ", t);
}