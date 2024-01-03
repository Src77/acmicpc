#include <stdio.h>

#include <cmath>
int cbr1(int n) { return (int)(cbrt(n) + 0.5); }
int cbr2(int n) {
    double temp = cbrt(n);
    int u, d;
    u = ceil(temp);
    d = floor(temp);
    if (pow(u, 3) - n < n - pow(d, 3)) {
        return u;
    } else
        return d;
}
int main() {
    for (int i = 10; i < 100000000; i++) {
        if (cbr1(i) != cbr2(i)) {
            printf("%d", i);
            return 0;
        }
    }
    printf("no");
}