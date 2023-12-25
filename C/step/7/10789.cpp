#include <cstdio>
#include <ctype.h>
char A[5][18];
int i, j;
int main(){
    for(i=0;i<5;i++)fgets(A[i], 17, stdin);
    for(i=0;i<16;i++){
        for(j=0;j<5;j++){
            if(!isalnum(A[j][i]))continue;
            printf("%c", A[j][i]);
        }
    }
}