#include <stdio.h>
int main(){
    int h, m, t;
    scanf("%d %d", &h, &m);
    t = (h*60 + m - 45 + 1440)%1440;
    printf("%d %d", t/60, t%60);
}