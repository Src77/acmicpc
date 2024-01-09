#include <bits/stdc++.h>
using namespace std;
int main(){
    int N;
    set<string> chong;
    chong.insert("ChongChong");
    for(scanf("%d", &N);N>0;N--){
        char t[22];
        string a, b;
        scanf("%s", t);
        a = string(t);
        scanf("%s", t);
        b = string(t);
        if(chong.find(a) != chong.end() && chong.find(b) != chong.end()); //nothing
        else if(chong.find(a) != chong.end()){
            chong.insert(b);
        }
        else if(chong.find(b) != chong.end()){
            chong.insert(a);
        }
    }
    printf("%d", chong.size());
}