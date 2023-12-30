#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, i, t;
    scanf("%d", &N);
    vector<int> range(N);
    iota(range.begin(), range.end(), 1);
    deque<int> k;
    copy(range.begin(), range.end(), inserter(k, k.end()));
    while (1) {
        if (k.size() == 1) break;
        k.pop_front();
        if (k.size() == 1) break;
        i = k.front();
        k.pop_front();
        k.push_back(i);
    }
    printf("%d", k.front());
}