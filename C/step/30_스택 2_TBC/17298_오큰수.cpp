#include <bits/stdc++.h>
using namespace std;
int main(){
    int i, N;
    scanf("%d", &N);
    vector<int> arr(N), ans(N);
    fill(ans.begin(), ans.end(), -1);
    for(auto &t: arr)scanf("%d", &t);
    stack<pair<int, int> > st;
    for(i=0;i<N;i++){
        while(!st.empty() && arr[i] > st.top().second){
            ans[st.top().first] = arr[i];
            st.pop();
        }
        st.push(pair(i, arr[i]));
    }
    for(auto &t: ans)printf("%d ", t);
}