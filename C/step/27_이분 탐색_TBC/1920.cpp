#include <bits/stdc++.h>
using namespace std;
int main() {
    int i, N, t, M;
    scanf("%d", &N);
    vector<int> arr(N);
    for (i = 0; i < N; i++) scanf("%d", &arr[i]);
    sort(arr.begin(), arr.end());
    scanf("%d", &M);
    for (i = 0; i < M; i++) {
        scanf("%d", &t);
        printf("%d\n", (int)(binary_search(arr.begin(), arr.end(), t)));
    }
}