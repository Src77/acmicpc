#include <cstdio>
int a, b, c, d, e, f, x, y;
int main(){
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    for(x=-999;x<=999;x++){
        for(y=-999;y<=999;y++){
            if(a*x+b*y==c && d*x+e*y==f){
                printf("%d %d", x, y);
                return 0;
            }
        }
    }
}