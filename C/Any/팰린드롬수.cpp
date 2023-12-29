#include <bits/stdc++.h>
using namespace std;
int main(){
    char s[6];
    int i, j, e;
    while(1){
        sss:
        scanf("%s", s);
        e = strlen(s);
        if(strcmp(s, "0")==0)break;
        for(i=0,j=e-1;i<e;i++,j--){
            if(s[i]!=s[j]){
                printf("no\n");
                goto sss;
            }
        }
        printf("yes\n");
    }
}