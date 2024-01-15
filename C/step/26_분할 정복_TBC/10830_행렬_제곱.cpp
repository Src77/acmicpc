#include <bits/stdc++.h>
#define M 1000
using namespace std;
using matrix = vector<vector<int> >;
matrix new_mat(int N) { return matrix(N, vector<int>(N)); }
matrix mult(matrix& A, matrix& B) {
    int i, j, k, l = A.size();
    auto C = new_mat(l);
    for (i = 0; i < l; i++) {
        for (j = 0; j < l; j++) {
            for (k = 0; k < l; k++) {
                C[i][j] += A[i][k] * B[k][j];
                C[i][j] %= M;
            }
        }
    }
    return C;
}
int main() {
    int i, j, N;
    long long b, cur;
    scanf("%d %lld", &N, &b);
    vector<matrix> P;
    P.push_back(new_mat(N));
    P.push_back(new_mat(N));
    auto ans = new_mat(N);
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &P[1][i][j]);
            P[1][i][j] %= M;
        }
        ans[i][i] = 1;
    }
    for (i = 2; i < 55; i++) {
        P.push_back(mult(P[i - 1], P[i - 1]));
    }
    for (cur = 1, j = 1; cur <= b; cur <<= 1, j++) {
        if (b & cur) {
            ans = mult(ans, P[j]);
        }
    }
    for (auto& row : ans) {
        for (auto& col : row) {
            printf("%d ", col);
        }
        printf("\n");
    }
}