#include <stdio.h>
#include <cstring>
int i, t, l;
char c[16];
int A[26] = {2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
int main(){
    scanf("%s", c);
    l = strlen(c);
    for(i=0;i<l;i++){
        t += A[c[i]-'A'] + 1;
    }
    printf("%d", t);
}