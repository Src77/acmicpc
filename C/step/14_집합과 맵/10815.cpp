#include <bits/stdc++.h>
using namespace std;
int main(){
    int i, N, t, M;
    scanf("%d", &N);
    set<int> cards;
    for(i=0;i<N;i++){
        scanf("%d", &t);
        cards.insert(t);
    }
    scanf("%d", &M);
    for(i=0;i<M;i++){
        scanf("%d", &t);
        if(cards.find(t)!=cards.end())printf("1 ");
        else printf("0 ");
    }
}