#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, t, M, i;
    map<int, int> cards;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        scanf("%d", &t);
        if (cards.find(t) == cards.end()) {
            cards[t] = 1;
        } else {
            cards[t] = cards[t] + 1;
        }
    }
    scanf("%d", &M);
    for (i = 0; i < M; i++) {
        scanf("%d", &t);
        if (cards.find(t) == cards.end()) {
            printf("0 ");
        } else {
            printf("%d ", cards[t]);
        }
    }
}