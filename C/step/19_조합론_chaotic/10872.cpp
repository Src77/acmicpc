#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, ans = 1;
    for (scanf("%d", &N); N > 0; N--) ans *= N;
    printf("%d", ans);
}