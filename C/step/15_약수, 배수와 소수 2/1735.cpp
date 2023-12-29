#include <bits/stdc++.h>
using namespace std;
int euclid(int a, int b){
    return !b?a:euclid(b, a%b);
}
int main(){
    int a, b, c, d, de, nu, t;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    de = b*d;
    nu = a*d + b*c;
    t = euclid(de, nu);
    printf("%d %d", nu/t, de/t);
}