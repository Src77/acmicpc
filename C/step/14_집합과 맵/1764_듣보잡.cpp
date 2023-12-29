#include <bits/stdc++.h>
using namespace std;
int main() {
    int i, n, m;
    char t[21];
    scanf("%d %d", &n, &m);
    set<string> N, M, NM;
    for (i = 0; i < n; i++) {
        scanf("%s", t);
        N.insert(string(t));
    }
    for (i = 0; i < m; i++) {
        scanf("%s", t);
        M.insert(string(t));
    }
    set_intersection(N.begin(), N.end(), M.begin(), M.end(), inserter(NM, NM.begin()));
    printf("%d\n", (int)NM.size());
    for (auto p = NM.begin(); p != NM.end(); p++) {
        printf("%s\n", (*p).c_str());
    }
}