#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(0);

    set<int> s;
    int n;
    cin >> n;

    vector<int> v(n), v1;

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        s.insert(v[i]);
    }

    v1.assign(s.begin(), s.end());

    for (int i = 0; i < n; i++)
        cout << lower_bound(v1.begin(), v1.end(), v[i]) - v1.begin() << ' ';
} 