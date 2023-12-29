#include <bits/stdc++.h>
using namespace std;
int main(){
    int i, N, M, c;
    scanf("%d %d", &N, &M);
    map<string, int> s_i;
    vector<string> i_s(N);
    for(i=1;i<=N;i++){
        char t[22];
        scanf("%s", t);
        string name = string(t);
        s_i[name]=i;
        i_s[i-1]=name;
    }
    for(i=1;i<=M;i++){
        char t[22];
        scanf("%s",t);
        c = atoi(t);
        if(c!=0){
            printf("%s\n", i_s[c-1].c_str());
        }
        else{
            printf("%d\n", s_i[string(t)]);
        }
    }
}