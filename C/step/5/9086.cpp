#include <stdio.h>
#include <cstring>
int main(){
    int T, i;
    char S[1001];
    scanf("%d",&T);
    for(i=0;i<T;i++){
        scanf("%s", S);
        printf("%c%c\n", S[0], S[strlen(S)-1]);
    }
}