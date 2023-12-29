#include <bits/stdc++.h>
using namespace std;
int euclid(int a, int b){
    return !b?a:euclid(b, a%b);
}
int t[100001];
int main(){
    int N, i, val;
    scanf("%d", &N);
    for(i=0;i<N;i++)scanf("%d", &t[i]);
    std::sort(t, t+N);
    val = t[1]-t[0];
    for(i=1;i<N-1;i++){
        val = euclid(t[i+1]-t[i], val);
    }
    printf("%d", (t[N-1]-t[0])/val - N + 1);
}