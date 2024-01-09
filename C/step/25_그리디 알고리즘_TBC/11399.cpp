#include <bits/stdc++.h>
using namespace std;
int main() {
    int i, N, acc = 0;
    scanf("%d", &N);
    vector<int> cost(N);
    for (i = 0; i < N; i++) scanf("%d", &cost[i]);
    sort(cost.begin(), cost.end(), greater<int>());
    for (i = 0; i < N; i++) {
        acc += accumulate(cost.begin() + i, cost.end(), 0);
    }
    printf("%d", acc);
}