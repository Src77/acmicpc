#include <bits/stdc++.h>
using namespace std;
int main() {
    int n, a = 0, b = 1, i;
    scanf("%d", &n);
    for (i = 0; i < n - 1; i++) {
        b = a + b;
        a = b - a;
    }
    printf("%d %d", b, n - 2);
}