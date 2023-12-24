#include <cstdio>
#include <cstring>
char S[101];
int i, j, n;
int main(){
    scanf("%s", S);
    n = strlen(S);
    for(i=0, j=n-1;i<n/2;i++, j--){
        if(S[i]!=S[j]){
            printf("0");
            return 0;
        }
    }
    printf("1");
}