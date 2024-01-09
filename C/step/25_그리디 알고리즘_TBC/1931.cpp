#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int, int> &a, pair<int, int> &b) { return a.second == b.second ? a.first < b.first : a.second < b.second; }
int main() {
    int i, N, cur, ans = 1;
    scanf("%d", &N);
    vector<pair<int, int> > v(N);
    for (i = 0; i < N; i++) scanf("%d %d", &v[i].first, &v[i].second);
    sort(v.begin(), v.end(), comp);
    cur = v[0].second;
    for (i = 1; i < N; i++) {
        if (v[i].first >= cur) {
            cur = v[i].second;
            ans++;
        }
    }
    printf("%d", ans);
}