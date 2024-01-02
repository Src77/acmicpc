#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, t, d;
    deque<int> dq;
    for (scanf("%d", &N); N > 0; N--) {
        scanf("%d", &t);
        if (t == 1) {
            scanf("%d", &d);
            dq.push_front(d);
        }
        if (t == 2) {
            scanf("%d", &d);
            dq.push_back(d);
        }
        if (t == 3) {
            if (!dq.empty()) {
                printf("%d\n", dq.front());
                dq.pop_front();
            } else
                printf("-1\n");
        }
        if (t == 4) {
            if (!dq.empty()) {
                printf("%d\n", dq.back());
                dq.pop_back();
            } else
                printf("-1\n");
        }
        if (t == 5) {
            printf("%d\n", dq.size());
        }
        if (t == 6) {
            printf("%d\n", !!dq.empty());
        }
        if (t == 7) {
            if (!dq.empty()) {
                printf("%d\n", dq.front());
            } else
                printf("-1\n");
        }
        if (t == 8) {
            if (!dq.empty()) {
                printf("%d\n", dq.back());
            } else
                printf("-1\n");
        }
    }
}