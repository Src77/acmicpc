#include <stdio.h>
#include <cstring>
int N, a[26], tc, i, count, l, flag;
char s[101];
int main(){
    scanf("%d", &N);
    for(tc=0;tc<N;tc++){
        for(i=0;i<26;i++){
            a[i] = 0;
        }
        scanf("%s", s);
        l = strlen(s);
        flag = 1;
        for(i=0;i<l;i++){
            if(a[s[i]-'a']==0){
                a[s[i]-'a']=1;
            }
            if(a[s[i]-'a']==2){
                flag = 0;
            }
            if(a[s[i]-'a']==1){
                if(s[i]!=s[i+1]){
                    a[s[i]-'a']=2;
                }
            }
        }
        count += flag;
    }
    printf("%d", count);
}