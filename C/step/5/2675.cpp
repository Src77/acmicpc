#include <stdio.h>
#include <ctype.h>
int main(){
    int i, j, T, R;
    char s;
    scanf("%d", &T);
    for(i=0;i<T;i++){
        scanf("%d", &R);
        while(1){
            scanf("%c", &s);
            if(s=='\n')break;
            if(s!=' '){
                for(j=0;j<R;j++)printf("%c", s);
            }
        } 
        printf("\n");
    }
}