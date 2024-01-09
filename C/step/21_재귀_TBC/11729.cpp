#include <bits/stdc++.h>
using namespace std;
int cnt;
void hanoi(int from, int to, int rest, int N){
    if(N==0)return;
    hanoi(from, rest, to, N-1);
    printf("%d %d\n", from, to);
    hanoi(rest, to, from, N-1);
}
int main(){
    int N;
    scanf("%d", &N);
    printf("%d\n", int(pow(2, N)) - 1);
    hanoi(1, 3, 2, N);
}