#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, t, e;
    stack<int> s;
    for(scanf("%d", &N);N>0;N--){
        scanf("%d", &t);
        if(t==1){
            scanf("%d", &e);
            s.push(e);
        }
        if(t==2){
            if(s.empty())printf("-1\n");
            else{
                printf("%d\n", s.top());
                s.pop();
            }
        }
        if(t==3){
            printf("%d\n", s.size());
        }
        if(t==4){
            printf("%d\n", !!s.empty());
        }
        if(t==5){
            if(s.empty())printf("-1\n");
            else printf("%d\n", s.top());
        }
    }
}