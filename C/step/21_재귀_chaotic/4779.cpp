#include <bits/stdc++.h>
using namespace std;
void print_cantor(int n){
    if(n==0){
        printf("-");
        return;
    }
    print_cantor(n-1);
    for(int i=0;i<(int)pow(3, n-1);i++)printf(" ");
    print_cantor(n-1);
}
int main(){
    int N;
    while(scanf("%d", &N)!=EOF){
        print_cantor(N);
        printf("\n");
    }
}