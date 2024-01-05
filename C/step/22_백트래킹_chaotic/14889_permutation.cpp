#include <bits/stdc++.h>
using namespace std;
int N, S[22][22], min_ans;
int comb1[11], comb2[11];
int diff(int sz){
    int i, j, a, b;
    a=b=0;
    for(i=0;i<sz;i++){
        for(j=i+1;j<sz;j++){
            a += S[comb1[i]][comb1[j]] + S[comb1[j]][comb1[i]];
        }
    }
    for(i=0;i<sz;i++){
        for(j=i+1;j<sz;j++){
            b += S[comb2[i]][comb2[j]] + S[comb2[j]][comb2[i]];
        }
    }
    return abs(a-b);
}
void comb_half(vector<bool> &mask){
    int i, j;
    j = 0;
    for(i=0;i<N;i++){
        if(mask[i])comb1[i-j] = i;
        else comb2[j++] = i;
    }
    min_ans = min(min_ans, diff(N/2));
    return;
}
int main(){
    int i, j;
    scanf("%d", &N);
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            scanf("%d", &S[i][j]);
        }
    }
    vector<bool> mask(N);
    fill(mask.begin(), mask.begin() + N/2, false);
    fill(mask.begin() + N/2, mask.end(), true);
    min_ans = 20000000;
    do{
        comb_half(mask);
    }while(next_permutation(mask.begin(), mask.end()));
    printf("%d\n", min_ans);
}