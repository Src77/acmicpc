#include <bits/stdc++.h>
using namespace std;
bool comp(pair<string, int> a, pair<string, int> b){
    return a.second == b.second ? a.first.length() == b.first.length() ? a.first.compare(b.first) < 0 : a.first.length() > b.first.length() : a.second > b.second;
}
int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    map<string, int> w_c;
    for(;N>0;N--){
        char t[12];
        scanf("%s", t);
        string temp = string(t);
        if(temp.length()<M)continue;
        if(w_c.find(temp) == w_c.end()){
            w_c[temp] = 1;
        }
        else w_c[temp]++;
    }
    vector<pair<string, int>> word(w_c.begin(), w_c.end());
    sort(word.begin(), word.end(), comp);
    for(auto p = word.begin();p!=word.end();p++)printf("%s\n", p->first.c_str());
}