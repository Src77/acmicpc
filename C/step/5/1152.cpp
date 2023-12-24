#include <stdio.h>
#include <cstring>
#include <ctype.h>
char S[1000005];
int i, t, l;
int main(){
    fgets(S, 1000005, stdin);
    l = strlen(S);
    for(i=0;i<l;i++){
        if(isalpha(S[i]) && !isalpha(S[i+1]))t++;
    }
    printf("%d", t);
}