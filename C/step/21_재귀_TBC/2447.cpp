#include <bits/stdc++.h>
using namespace std;
bool arr[6561][6561];
void stars(int n, int x, int y){
    int i, j, k;
    k = n/3;
    if(n==3){
        for(i=x;i<x+3;i++){
            for(j=y;j<y+3;j++){
                arr[i][j] = true;
            }
        }
        arr[x+1][y+1] = false;
        return;
    }
    for(i=x;i<x+n;i+=k){
        stars(k, i, y);
    }
    stars(k, x, y+k);
    for(i=x+k;i<x+2*k;i++){
        for(j=y+k;j<y+2*k;j++){
            arr[i][j] = false;
        }
    }
    stars(k, x+2*k, y+k);
    for(i=x;i<x+n;i+=k){
        stars(k, i, y+2*k);
    }
}
int main(){
    int i, j, N;
    scanf("%d", &N);
    stars(N, 0, 0);
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(arr[i][j])printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}