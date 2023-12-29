#include <cstdio>
#include <algorithm>
int x[100000], y[100000], xs, xe, ys, ye, N, i;
int main(){
    scanf("%d", &N);
    for(i=0;i<N;i++)scanf("%d %d", &x[i], &y[i]);
    xs = *std::min_element(x, x+N);
    xe = *std::max_element(x, x+N);
    ys = *std::min_element(y, y+N);
    ye = *std::max_element(y, y+N);
    printf("%d", (xe-xs)*(ye-ys));
}