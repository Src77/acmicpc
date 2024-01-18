#include <bits/stdc++.h>
using namespace std;
int N;
char arr[1025][1025];
void stairs(int x, int y, int l){
    if(l==1)arr[x][y] = 1;
    else{
        stairs(x, y, l/2);
        stairs(x+l/2, y, l/2);
        stairs(x+l/2, y+l/2, l/2);
    }
}
int main(){
    int i, j, x, y;
    scanf("%d", &N);
    stairs(0, 0, N/3);
    for(i=0;i<N;i++){
        for(j=0;j<N-i-1;j++){
            printf(" ");
        }
        for(j=0;j<2*i+1;j++){
            if(arr[i/3][j/6] == 1){
                x = j - (j/6)*6;
                y = i - (i/3)*3;
                if(x>y*2 || (x==1 && y==1))printf(" ");
                else printf("*");
            }
            else printf(" ");
        }
        for(j=0;j<N-i-1;j++){
            printf(" ");
        }
        printf("\n");
    }
}