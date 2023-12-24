#include <stdio.h>
#include <algorithm>
int N, max, min, i, t;
int main(){
    scanf("%d", &N);
    min = 10e7;
    max = -10e7;
    for(i=0;i<N;i++){
        scanf("%d", &t);
        max = std::max(max, t);
        min = std::min(min ,t);
    }
    printf("%d %d", min, max);
}