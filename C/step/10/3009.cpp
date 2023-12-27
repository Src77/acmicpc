#include <cstdio>
#include <algorithm>
int x[3], y[3], i, s, e;
int main(){
    for(i=0;i<3;i++){
        scanf("%d %d", &x[i], &y[i]);
    }
    std::sort(x, x+3);
    std::sort(y, y+3);
    s = x[0], e = x[2];
    if(x[1] == s){
        printf("%d ", e);
    }
    else{
        printf("%d ", s);
    }
    s = y[0], e = y[2];
    if(y[1] == s){
        printf("%d", e);
    }
    else{
        printf("%d", s);
    }
}