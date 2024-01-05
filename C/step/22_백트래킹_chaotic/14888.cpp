#include <bits/stdc++.h>
using namespace std;
int max_ans, min_ans;
void fsr(vector<int> &A, vector<int> &ops, vector<bool> &mask, int ans, int idx){
    if(idx == A.size()){
        max_ans = max(max_ans, ans);
        min_ans = min(min_ans, ans);
        return;
    }
    for(int i=0;i<ops.size();i++){
        if(mask[i])continue;
        if(ops[i] == 0){
            mask[i] = true;
            fsr(A, ops, mask, ans + A[idx], idx+1);
            mask[i] = false;
        }
        else if(ops[i] == 1){
            mask[i] = true;
            fsr(A, ops, mask, ans - A[idx], idx+1);
            mask[i] = false;
        }
        else if(ops[i] == 2){
            mask[i] = true;
            fsr(A, ops, mask, ans * A[idx], idx+1);
            mask[i] = false;
        }
        else if(ops[i] == 3){
            mask[i] = true;
            fsr(A, ops, mask, ans / A[idx], idx+1);
            mask[i] = false;
        }
    }
}
int main(){
    int i, N, t;
    scanf("%d", &N);
    vector<int> ops;
    vector<int> A(N);
    vector<bool> mask;
    for(i=0;i<N;i++)scanf("%d", &A[i]);
    for(i=0;i<4;i++){
        for(scanf("%d", &t);t>0;t--){
            ops.push_back(i);
            mask.push_back(false);
        }
    }
    max_ans = -1000000001;
    min_ans = 1000000001;
    fsr(A, ops, mask, A[0], 1);
    printf("%d\n%d", max_ans, min_ans);
}