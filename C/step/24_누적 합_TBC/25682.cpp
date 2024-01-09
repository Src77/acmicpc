#include <bits/stdc++.h>
using namespace std;
int N, M, K, acs[2001][2001];
bool board[2001][2001];
int func(int x, int y) {
    int temp = acs[x + K - 1][y + K - 1] - acs[x + K - 1][y - 1] - acs[x - 1][y + K - 1] + acs[x - 1][y - 1];
    return min(temp, K * K - temp);
}
int main() {  // board(0,0) = white.
    int i, j, ans;
    char temp;
    scanf("%d %d %d", &N, &M, &K);
    ans = K * K;
    for (i = 1; i <= N; i++) {
        for (j = 1; j <= M; j++) {
            do {
                scanf("%c", &temp);
            } while (temp != 'W' && temp != 'B');
            if (temp == 'W')
                board[i][j] = true;
            else
                board[i][j] = false;
        }
    }
    for (i = 1; i <= N; i++) {
        int tcnt = 0;
        for (j = 1; j <= M; j++) {
            if ((i + j) % 2 == 0 && board[i][j]) {  // white
                tcnt++;
            } else if ((i + j) % 2 == 1 && !board[i][j]) {  // black
                tcnt++;
            }
            acs[i][j] = acs[i - 1][j] + tcnt;
        }
    }
    for (i = 1; i <= N - K + 1; i++) {
        for (j = 1; j <= M - K + 1; j++) {
            ans = min(ans, func(i, j));
        }
    }
    printf("%d", ans);
}