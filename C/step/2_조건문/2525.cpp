#include <stdio.h>
int main(){
    int h, m, c, t;
    scanf("%d %d %d", &h, &m, &c);
    t = (h*60 + m + c + 1440)%1440;
    printf("%d %d", t/60, t%60);
}