#include <cstdio>
#include <algorithm>
int abs(int n){
    if(n<0)return -n;
    return n;
}
int main(){
    int x, y, w, h;
    scanf("%d %d %d %d", &x, &y, &w, &h);
    printf("%d", std::min({abs(x-w), x, abs(y-h), y}));
}