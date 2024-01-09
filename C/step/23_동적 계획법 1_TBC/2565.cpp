#include <bits/stdc++.h>
using namespace std;
bool comp(pair<int, int> &a, pair<int, int> &b) { return a.first < b.first; }
int main() {
    int i, j, N;
    scanf("%d", &N);
    vector<pair<int, int> > line(N);
    vector<int> dp(N);
    for (i = 0; i < N; i++) scanf("%d %d", &line[i].first, &line[i].second);
    sort(line.begin(), line.end(), comp);
    for (i = N - 1; i >= 0; i--) {
        dp[i] = 1;
        for (j = i + 1; j < N; j++) {
            if (line[i].second < line[j].second) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    printf("%d", N - *max_element(dp.begin(), dp.end()));
}