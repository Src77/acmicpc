#include <cstdio>
#include <cstring>
#include <cctype>
char N[33];
int B, D, i;
int main(){
    scanf("%s", N);
    scanf("%d", &B);
    for(i=0;i<strlen(N);i++){
        D *= B;
        if(isalpha(N[i])){
            D += N[i] - 'A' + 10;
        }
        else{
            D += N[i] - '0';
        }
    }
    printf("%d", D);
}