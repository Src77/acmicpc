#include <bits/stdc++.h>
using namespace std;
int tmp[500001], K, cnt, ans;
void merge(vector<int> &A, int p, int q, int r) {
    int i = p, j = q + 1, t = 1;
    while (i <= q && j <= r) {
        if (A[i] <= A[j])tmp[t++] = A[i++];
        else tmp[t++] = A[j++];
    }
    while (i <= q)  // 왼쪽 배열 부분이 남은 경우
        tmp[t++] = A[i++];
    while (j <= r)  // 오른쪽 배열 부분이 남은 경우
        tmp[t++] = A[j++];
    i = p; t = 1;
    while (i <= r){  // 결과를 A[p..r]에 저장
        A[i++] = tmp[t++]; 
        cnt++;
        if(K==cnt){
            ans = A[i-1];
        }
    }
}
void merge_sort(vector<int> &A, int p, int r) { // A[p..r]을 오름차순 정렬한다.
    if (p < r) {
        int q = (p + r) / 2;       // q는 p, r의 중간 지점
        merge_sort(A, p, q);     // 전반부 정렬
        merge_sort(A, q + 1, r); // 후반부 정렬
        merge(A, p, q, r);       // 병합
    }
}

// A[p..q]와 A[q+1..r]을 병합하여 A[p..r]을 오름차순 정렬된 상태로 만든다.
// A[p..q]와 A[q+1..r]은 이미 오름차순으로 정렬되어 있다.
int main(){
    int i, N;
    scanf("%d %d", &N, &K);
    vector<int> A(N+1);
    for(i=1;i<=N;i++)scanf("%d", &A[i]);
    ans = -1;
    merge_sort(A, 1, N);
    printf("%d", ans);
}