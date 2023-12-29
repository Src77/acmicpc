#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll euclid(ll a, ll b){
    return !b?a:euclid(b, a%b);
}
int main(){
    ll a, b;
    scanf("%lld %lld", &a, &b);
    printf("%lld", a*b/euclid(a, b));
}