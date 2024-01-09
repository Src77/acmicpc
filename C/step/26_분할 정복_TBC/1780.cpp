#include <bits/stdc++.h>
using namespace std;
int N, arr[2187][2187], ans1, ans0, ansn;
int countx(int x, int y, int size, int val) {
    int i, j, cnt = 0;
    for (i = x; i < x + size; i++) {
        for (j = y; j < y + size; j++) {
            if (arr[i][j] == val) cnt++;
        }
    }
    return cnt;
}
void divq(int x, int y, int size) {
    int i, j, k, c1, c0, cn;
    c1 = countx(x, y, size, 1);
    c0 = countx(x, y, size, 0);
    cn = countx(x, y, size, -1);
    if (c1 == size * size)
        ans1++;
    else if (c0 == size * size)
        ans0++;
    else if (cn == size * size)
        ansn++;
    else {
        k = size / 3;
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                divq(x + i * k, y + j * k, k);
            }
        }
    }
}
int main() {
    int i, j;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    divq(0, 0, N);
    printf("%d\n%d\n%d", ansn, ans0, ans1);
}