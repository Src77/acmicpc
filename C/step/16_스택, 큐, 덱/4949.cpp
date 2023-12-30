#include <bits/stdc++.h>
using namespace std;
int main(){
    while(1){
        stack<int> S;
        char l[201];
        int i, flag;
        fgets(l, 200, stdin);
        if(l[0]=='.')break;
        flag = 1;
        for(i=0;i<strlen(l);i++){
            if(l[i]=='('){
                S.push(1);
            }
            if(l[i]=='['){
                S.push(2);
            }
            if(l[i]==')'){
                if(S.empty() || S.top()!=1){
                    flag = 0;
                    break;
                }
                else S.pop();
            }
            if(l[i]==']'){
                if(S.empty() || S.top()!=2){
                    flag = 0;
                    break;
                }
                else S.pop();
            }
        }
        if(flag && S.empty())printf("yes\n");
        else printf("no\n");
    }
}