#include <bits/stdc++.h>
using namespace std;
int main(){
    int N, count = 0;
    map<string, bool> gomgom;
    for(scanf("%d", &N);N>0;N--){
        char a[22];
        scanf("%s", a);
        string text = string(a);
        if(text.compare("ENTER")==0){
            gomgom.clear();
        }
        else{
            if(gomgom.find(text) == gomgom.end()){
                count++;
                gomgom[text] = false;
            }
        }
    }
    printf("%d", count);
}