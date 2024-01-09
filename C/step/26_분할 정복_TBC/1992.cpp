#include <bits/stdc++.h>
using namespace std;
int N, arr[128][128];
int count1(int xs, int ys, int size) {
    int i, j, ret = 0;
    for (i = xs; i < xs + size; i++) {
        for (j = ys; j < ys + size; j++) {
            ret += arr[i][j];
        }
    }
    return ret;
}
void divq(int x, int y, int size) {
    if (size == 1) {
        if (arr[x][y] == 0)
            printf("0");
        else
            printf("1");
        return;
    }
    int m = count1(x, y, size);
    if (m == 0)
        printf("0");
    else if (m == size * size)
        printf("1");
    else {
        printf("(");
        divq(x, y, size / 2);
        divq(x, y + size / 2, size / 2);
        divq(x + size / 2, y, size / 2);
        divq(x + size / 2, y + size / 2, size / 2);
        printf(")");
    }
    return;
}
int main() {
    int i, j;
    char t;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            do {
                scanf("%c", &t);
            } while (t != '0' && t != '1');
            arr[i][j] = t - '0';
        }
    }
    divq(0, 0, N);
}