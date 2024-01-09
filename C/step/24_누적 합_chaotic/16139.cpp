#include <bits/stdc++.h>
using namespace std;
int acs[200001][26];
int main() {
    string a;
    cin >> a;
    int i, j, T;
    for (i = 0; i < 26; i++) {
        for (j = 1; j <= a.length(); j++) {
            if (a[j - 1] == i + 'a')
                acs[j][i] = acs[j - 1][i] + 1;
            else
                acs[j][i] = acs[j - 1][i];
        }
    }
    for (scanf("%d", &T); T > 0; T--) {
        char q;
        int s, e;
        scanf("%c", &q);
        scanf("%c %d %d", &q, &s, &e);
        printf("%d\n", acs[e + 1][q - 'a'] - acs[s][q - 'a']);
    }
}