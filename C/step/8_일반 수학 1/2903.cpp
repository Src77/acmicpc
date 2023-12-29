#include <cstdio>
#include <cmath>
int main(){
    int N;
    scanf("%d", &N);
    printf("%d", ((1<<N)+1)*((1<<N)+1));
}