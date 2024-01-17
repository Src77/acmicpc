#include <bits/stdc++.h>
using namespace std;
int main() {
    int i, N;
    scanf("%d", &N);
    vector<int> arr(N), temp(N);
    for (i = 0; i < N; i++) scanf("%d", &arr[i]);
    fill(temp.begin(), temp.end(), 1000001);
    for (i = 0; i < N; i++) {
        auto p = upper_bound(temp.begin(), temp.end(), arr[i]);
        if (p != temp.begin() && *(p - 1) == arr[i]) continue;
        *p = arr[i];
    }
    printf("%d", lower_bound(temp.begin(), temp.end(), 1000001) - temp.begin());
}