#include <cstdio>
int main()
{
    int a, b, v, r;
    scanf("%d %d %d", &a, &b, &v);
    v-=a;
    r=1;
    if(v>0){
        r += v/(a-b);
        if(v%(a-b))r+=1;
    }
    printf("%d",r);
}