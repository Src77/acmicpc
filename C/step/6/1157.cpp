#include <cstdio>
#include <cstring>
#include <ctype.h>
#include <algorithm>
char S[1000001];
int n[26], l, i, *m;
int main(){
    scanf("%s", S);
    l = strlen(S);
    for(i=0;i<l;i++){
        n[tolower(S[i])-'a']++;
    }
    m = std::max_element(n, n+26);
    for(i=0;i<26;i++){
        if(n+i == m)continue;
        if(n[i]==*m){
            printf("?");
            return 0;
        }
    }
    printf("%c", (m-n)+'A');
}