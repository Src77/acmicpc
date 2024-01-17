#include <bits/stdc++.h>
using namespace std;
int main() {
    int i, t, N;
    priority_queue<int> pq;
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