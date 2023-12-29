#include <stdio.h>
int i, t, m, idx;
int main(){
    for(i=0;i<9;i++){
        scanf("%d", &t);
        if(m<t){
            idx = i+1;
            m = t;
        }
    }
    printf("%d\n%d", m, idx);
}