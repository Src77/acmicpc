#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, d;
    queue<int> Q;
    for(scanf("%d", &N);N>0;N--){
        char work[7];
        scanf("%s", work);
        if(strcmp(work, "push")==0){
            scanf("%d", &d);
            Q.push(d);
        }
        else if(strcmp(work, "front")==0){
            if(!Q.empty()){
                printf("%d\n", Q.front());
            }
            else printf("-1\n");
        }
        else if(strcmp(work, "back")==0){
            if(!Q.empty()){
                printf("%d\n", Q.back());
            }
            else printf("-1\n");
        }
        else if(strcmp(work, "size")==0){
            printf("%d\n", Q.size());
        }
        else if(strcmp(work, "empty")==0){
            printf("%d\n", !!Q.empty());
        }
        else if(strcmp(work, "pop")==0){
            if(!Q.empty()){
                printf("%d\n", Q.front());
                Q.pop();
            }
            else printf("-1\n");
        }
    }
}