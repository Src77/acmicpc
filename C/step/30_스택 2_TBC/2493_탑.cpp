#include <bits/stdc++.h>
using namespace std;
int main(){
    int i, N;
    scanf("%d", &N);
    vector<int> arr(N), ans(N);
    fill(ans.begin(), ans.end(), 0);
    for(auto &t: arr)scanf("%d", &t);
    stack<pair<int, int> > st;
    for(i=N-1;i>=0;i--){
        while(!st.empty() && arr[i] > st.top().second){
            ans[st.top().first] = i+1;
            st.pop();
        }
        st.push(pair(i, arr[i]));
    }
    for(auto &t: ans)printf("%d ", t);
}