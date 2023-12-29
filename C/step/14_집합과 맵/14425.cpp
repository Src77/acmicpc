#include <bits/stdc++.h>
using namespace std;
int main(){
    int i, N, cnt=0, M;
    scanf("%d", &N);
    scanf("%d", &M);
    set<string> cards;
    for(i=0;i<N;i++){
        char t[502];
        scanf("%s", t);
        cards.insert(string(t));
    }
    for(i=0;i<M;i++){
        char t[502];
        scanf("%s", t);
        if(cards.find(string(t))!=cards.end())cnt++;
    }
    printf("%d", cnt);
}