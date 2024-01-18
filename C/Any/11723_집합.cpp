#include <bits/stdc++.h>
using namespace std;
int main(){
    int w, t, i;
    char s[10];
    set<int> st;
    for(scanf("%d", &w);w>0;w--){
        string work;
        scanf("%s", s);
        work = string(s);
        if(work == "add"){
            scanf("%d", &t);
            st.insert(t);
        }
        if(work == "remove"){
            scanf("%d", &t);
            st.erase(t);
        }
        if(work == "check"){
            scanf("%d", &t);
            printf("%d\n", st.find(t) != st.end());
        }
        if(work == "toggle"){
            scanf("%d", &t);
            if(st.find(t) != st.end()){
                st.erase(t);
            }
            else st.insert(t);
        }
        if(work == "all"){
            for(i=1;i<=20;i++)st.insert(i);
        }
        if(work == "empty"){
            st.clear();
        }
    }
}