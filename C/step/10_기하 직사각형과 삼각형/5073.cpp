#include <cstdio>
#include <algorithm>
int a[3];
int main(){
    while(1){
        scanf("%d  %d %d", &a[0], &a[1], &a[2]);
        if(a[0]==0)break;
        std::sort(a, a+3);
        if(a[0]+a[1]<=a[2]){
            printf("Invalid\n");
        }
        else if(a[0]==a[2]){
            printf("Equilateral\n");
        }
        else if(a[0]==a[1] || a[1]==a[2]){
            printf("Isosceles\n");
        }
        else{
            printf("Scalene\n");
        }
    }
}