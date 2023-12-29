#include <cstdio>
#include <algorithm>
int a[3];
int main(){
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    std::sort(a, a+3);
    if(a[0]+a[1]+a[2] != 180){
        printf("Error");
        return 0;
    }
    if(a[0]==a[1] && a[1]==a[2]){
        printf("Equilateral");
    }
    else if(a[0]==a[1] || a[1]==a[2]){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
}