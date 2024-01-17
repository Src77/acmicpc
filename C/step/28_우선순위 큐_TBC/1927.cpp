#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, N;
    auto comp = [](int &a, int &b) { return a > b; };
    priority_queue<int, vector<int>, decltype(comp)> pq(comp);
    for (scanf("%d", &N); N > 0; N--) {
        scanf("%d", &t);
        if (t == 0) {
            if (pq.empty()) {
                printf("0\n");
            } else {
                printf("%d\n", pq.top());
                pq.pop();
            }
        } else
            pq.push(t);
    }
}