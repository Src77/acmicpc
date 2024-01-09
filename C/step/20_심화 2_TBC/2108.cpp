#include <bits/stdc++.h>
using namespace std;
int main(){
    int i, N;
    scanf("%d", &N);
    vector<int> a(N);
    for(i=0;i<N;i++)scanf("%d", &a[i]);
    sort(a.begin(), a.end());
    auto sum = reduce(a.begin(), a.end());
    printf("%d\n", (int)round((double)sum/N));
    printf("%d\n", a[N/2]);
    vector<int> mode(8001);
    fill_n(mode.begin(), 8001, 0);
    for(i=0;i<N;i++)mode[a[i]+4000]++;
    int m = *max_element(mode.begin(), mode.end());
    int idx = -1;
    for(i=0;i<=8000;i++){
        if(m==mode[i]){
            if(idx!=-1){
                idx = i;
                break;
            }
            idx = i;
        }
    }
    printf("%d\n", idx - 4000);
    printf("%d\n", a[N-1]-a[0]);
}