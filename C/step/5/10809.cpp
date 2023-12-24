#include <stdio.h>
#include <cstring>
char S[101];
int a[26], i;
int main(){
    scanf("%s", S);
    for(i=0;i<strlen(S);i++){
        if(!a[S[i]-'a'])a[S[i]-'a'] = i+1;
    }
    for(i=0;i<26;i++){
        printf("%d ", a[i]-1);
    }
}