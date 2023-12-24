#include <cstdio>
int A[6] = {1, 1, 2, 2, 2, 8}, i, t;
int main(){
    for(i=0;i<6;i++){
        scanf("%d", &t);
        printf("%d ", A[i]-t);
    }
}
