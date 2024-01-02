#include <bits/stdc++.h>
using namespace std;
int fact(int k) {
    int ans = 1;
    for (; k > 0; k--) ans *= k;
    return ans;
}
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    printf("%d", fact(n) / (fact(k) * fact(n - k)));
}