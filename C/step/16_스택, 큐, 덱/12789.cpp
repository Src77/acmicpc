#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, i, a[1000];
    stack<int> l1, l2;
    scanf("%d", &N);
    for(i=0;i<N;i++)scanf("%d", &a[i]);
    for(i=N-1;i>=0;i--)l1.push(a[i]);
    i=1;
    while(!l1.empty() || !l2.empty()){
        if(l1.empty()){
            if(l2.top()!=i){
                printf("Sad");
                return 0;
            }
            else{
                l2.pop();
                i++;
            }
        }
        else if(l1.top()!=i){
            if(!l2.empty() && l2.top()==i){
                l2.pop();
                i++;
            }
            else{
                l2.push(l1.top());
                l1.pop();
            }
        }
        else{
            l1.pop();
            i++;
        }
    }
    printf("Nice");
}