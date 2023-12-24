#include <cstdio>
#include <cstring>
char S[101];
char crs[7][3] = {"c=", "c-", "d-", "lj", "nj", "s=", "z="};
int i, j, l, c;
bool is_same(char *a, char *b, int len){
    for(int i=0;i<len;i++){
        if(*(a+i)!=*(b+i))return false;
    }
    return true;
}
int main(){
    scanf("%s", S);
    l = strlen(S);
    c = l;
    for(i=0;i<l-2;i++){
        if(is_same("dz=", S+i, 3)){
            c-=2;
            S[i] = 0, S[i+1] = 0, S[i+2] = 0;
        }
    }
    for(i=0;i<l-1;i++){
        for(j=0;j<7;j++){
            if(is_same(crs[j], S+i, 2)){
                c-=1;
                S[i] = 0, S[i+1] = 0;
            }
        }
    }
    printf("%d", c);
}