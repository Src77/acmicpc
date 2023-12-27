#include <cstdio>
#include <algorithm>
int a[3];
int main(){
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    std::sort(a, a+3);
    if(a[0]+a[1]>a[2]){
        printf("%d", a[0]+a[1]+a[2]);
    }
    else{
        printf("%d", (a[0]+a[1])*2-1);
    }
}