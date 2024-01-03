#include <bits/stdc++.h>
using namespace std;
int main() {
    int i, j, t, N;
    vector<int> dq;
    scanf("%d", &N);
    vector<int> b(N + 1);
    for (i = 1; i <= N; i++) {
        scanf("%d", &t);
        dq.push_back(i);
        b[i] = t;
    }
    auto p = dq.begin();
    for (i = 0; i < N; i++) {
        printf("%d ", *p);
        t = b[*p];
        if (t < 0) {
            p -= 1;
            dq.erase(p + 1);
            t += 1;
            while (1) {
                if (p < dq.begin()) p = dq.end() - 1;
                if (t == 0) break;
                p -= 1;
                t++;
            }
        }
        if (t > 0) {
            dq.erase(p);
            t -= 1;
            while (1) {
                if (p >= dq.end()) p = dq.begin();
                if (t == 0) break;
                p += 1;
                t--;
            }
        }
    }
}
