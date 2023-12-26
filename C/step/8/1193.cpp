#include <cstdio>
int main(){
    int N, de=1, nu=1;
    for(scanf("%d", &N);N>1;N--){
        if((de+nu)%2 == 0){
            if(nu==1){
                de++;
            }
            else{
                nu--;
                de++;
            }
        }
        else{
            if(de==1){
                nu++;
            }
            else{
                de--;
                nu++;
            }
        }
    }
    printf("%d/%d",nu,de);
}