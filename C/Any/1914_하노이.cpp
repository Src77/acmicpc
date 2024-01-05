#include <bits/stdc++.h>
using namespace std;
int cnt;
void hanoi(int from, int to, int rest, int N){
    if(N==0)return;
    hanoi(from, rest, to, N-1);
    printf("%d %d\n", from, to);
    hanoi(rest, to, from, N-1);
}
string m2(string x){
    char temp[33];
    int i, buffer=0, cur;
    for(i=0;i<x.length();i++){
        cur = x[i] - '0';
        if(cur * 2 + buffer > 9){
            temp[i] = cur * 2 + buffer - 10 + '0';
            buffer = 1;
        }
        else{
            temp[i] = cur * 2 + buffer + '0';
            buffer = 0;
        }
    }
    if(buffer){
        temp[i]='1';
        temp[i+1]=0;
    }
    else temp[i]=0;
    return string(temp);
}
int main(){
    int i, N;
    scanf("%d", &N);
    string b = "1";
    for(i=0;i<N;i++){
        b = m2(b);
    }
    b[0] = b[0] - 1;
    reverse(b.begin(), b.end());
    cout<<b<<endl;
    if(N<=20)hanoi(1, 3, 2, N);
}