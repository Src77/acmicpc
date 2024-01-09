#include <bits/stdc++.h>
using namespace std;
char ops[50];
int nums[50], oc, nc, ans, flag;
int main() {
    int i, j;
    while (1) {
        scanf("%d", &nums[nc++]);
        if (scanf("%c", &ops[oc++]) == EOF) break;
        if (ops[oc - 1] != '-' && ops[oc - 1] != '+') {
            break;
        }
    }
    flag = 1;
    for (i = 0; i < nc; i++) {
        ans += flag * nums[i];
        if (i != nc - 1 && ops[i] == '-') flag = -1;
    }
    printf("%d", ans);
}