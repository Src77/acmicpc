#include <bits/stdc++.h>
using namespace std;
int euclid(int a, int b){
    return !b?a:euclid(b, a%b);
}
int main(){
    int N, a, b;
    for(scanf("%d", &N);N>0;N--){
        scanf("%d %d", &a, &b);
        printf("%d\n", a*b/euclid(a, b));
    }
}