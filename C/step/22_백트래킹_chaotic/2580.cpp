#include <bits/stdc++.h>
using namespace std;
int x[9][10], y[9][10], sq[9][10], arr[9][9];
bool termi;
void sdk(vector<pair<int, int>> &A, int idx){
    if(termi)return;
    if(idx == A.size()){
        termi = true;
        return;
    }
    int i, j, a, b, s;
    a = A[idx].first;
    b = A[idx].second;
    s = (a/3)*3 + b/3;
    for(i=1;i<=9;i++){
        if(x[b][i] || y[a][i] || sq[s][i])continue;
        arr[a][b] = i;
        x[b][i] = 1;
        y[a][i] = 1;
        sq[s][i] = 1;
        sdk(A, idx+1);
        if(termi)return;
        arr[a][b] = 0;
        x[b][i] = 0;
        y[a][i] = 0;
        sq[s][i] = 0;
    }
}
int main(){
    int i, j;
    vector<pair<int, int>> A;
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            scanf("%d", &arr[i][j]);
            if(arr[i][j] == 0){
                A.push_back(pair(i, j));
            }
            sq[(i/3)*3 + j/3][arr[i][j]] = 1;
            x[j][arr[i][j]] = 1;
            y[i][arr[i][j]] = 1;
        }
    }
    sdk(A, 0);
    for(i=0;i<9;i++){
        for(j=0;j<9;j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}