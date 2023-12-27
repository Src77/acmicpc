#include <cstdio>
#include <algorithm>
int arr[50], N, i;
int main(){
    scanf("%d", &N);
    for(i=0;i<N;i++)scanf("%d", &arr[i]);
    std::sort(arr, arr+N);
    printf("%d", arr[0]*arr[N-1]);
}