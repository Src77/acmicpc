#include <bits/stdc++.h>
#define P 1000000000
using namespace std;
using matrix = vector<vector<long long> >;
matrix new_mat(int N) { return matrix(N, vector<long long>(N)); }
matrix mult(matrix& A, matrix& B) {
    int i, j, k, l = A.size();
    auto C = new_mat(l);
    for (i = 0; i < l; i++) {
        for (j = 0; j < l; j++) {
            for (k = 0; k < l; k++) {
                C[i][j] += A[i][k] * B[k][j];
                C[i][j] %= P;
            }
        }
    }
    return C;
}
long long fib(vector<matrix>& V, long long k) {
    long long cur;
    int j;
    k -= 1;
    auto ans = new_mat(2);
    ans[0][0] = ans[1][1] = 1;
    for (cur = 1, j = 1; cur <= k; cur <<= 1, j++) {
        if (k & cur) {
            ans = mult(ans, V[j]);
        }
    }
    return ans[0][0];
}
int main() {
    int i, j;
    long long a, b, cur, x, y, z, ans;
    scanf("%lld %lld", &a, &b);
    vector<matrix> V;
    V.push_back(new_mat(2));
    V.push_back(new_mat(2));
    V[1][0][0] = V[1][1][0] = V[1][0][1] = 1;
    for (i = 2; i < 63; i++) {
        V.push_back(mult(V[i - 1], V[i - 1]));
    }
    if (b == 1) {
        printf("1");
        return 0;
    }
    x = fib(V, a + 1);
    y = fib(V, b + 2);
    printf("%lld", ((y - x) % P + P) % P);
}