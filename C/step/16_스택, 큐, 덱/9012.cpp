#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    for(scanf("%d", &T);T>0;T--){
        stack<int> S;
        char l[52];
        int i, flag;
        scanf("%s", l);
        flag = 1;
        for(i=0;i<strlen(l);i++){
            if(l[i]=='('){
                S.push(1);
            }
            if(l[i]==')'){
                if(S.empty()){
                    flag = 0;
                    break;
                }
                else S.pop();
            }
        }
        if(flag && S.empty())printf("YES\n");
        else printf("NO\n");
    }
}