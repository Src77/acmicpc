#include <cstdio>
#include <cstring>
float score(char *s){
    if(strcmp(s, "A+")==0)return 4.5;
    if(strcmp(s, "A0")==0)return 4.0;
    if(strcmp(s, "B+")==0)return 3.5;
    if(strcmp(s, "B0")==0)return 3.0;
    if(strcmp(s, "C+")==0)return 2.5;
    if(strcmp(s, "C0")==0)return 2.0;
    if(strcmp(s, "D+")==0)return 1.5;
    if(strcmp(s, "D0")==0)return 1.0;
    if(strcmp(s, "F")==0)return 0.0;
    return -1;
}
int i;
float total, credit, sc, cnt;
char dummy[51], rank[3];
int main(){
    for(i=0;i<20;i++){
        scanf("%s", dummy);
        scanf("%f", &credit);
        scanf("%s", rank);
        sc = score(rank);
        if(sc>=0){
            cnt += credit;
            total += credit * sc;
        }
    }
    printf("%f", total/cnt);
}