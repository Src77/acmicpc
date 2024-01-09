#include <bits/stdc++.h>
using namespace std;
int N, M;
int arr[100001], acs[100001];
int main() {
    int i, s, e;
    scanf("%d %d", &N, &M);
    for (i = 1; i <= N; i++) scanf("%d", &arr[i]);
    for (i = 1; i <= N; i++) acs[i] = acs[i - 1] + arr[i];
    for (; M > 0; M--) {
        scanf("%d %d", &s, &e);
        printf("%d\n", acs[e] - acs[s - 1]);
    }
}