#include <bits/stdc++.h>
using namespace std;
int main(){
    int i, j;
    string in, bm;
    vector<char> st;
    cin>>in>>bm;
    for(i=0;i<in.length();i++){
        st.push_back(in[i]);
        if(string(st.end() - bm.size(), st.end()) == bm){
            for(j=0;j<bm.size();j++)st.pop_back();
        }
    }
    if(st.size()==0)printf("FRULA");
    else for(auto &c : st)printf("%c", c);
}