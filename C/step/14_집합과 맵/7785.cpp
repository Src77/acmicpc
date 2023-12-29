#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    set<string> man;
    for(scanf("%d", &N);N>0;N--){
        char t[6], e[6];
        scanf("%s %s", t, e);
        string name = string(t);
        if(strcmp(e, "enter")==0){
            man.insert(name);
        }
        else{
            auto p = man.find(name);
            man.erase(p);
        }
    }
    for(auto p = man.rbegin();p!=man.rend();p++){
        printf("%s\n", (*p).c_str());
    }
}