#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
bool comp(string x, string y){
    return x.length() == y.length() ? x.compare(y)<0 : x.length() < y.length();
}
int main()
{
    vector<string> words;
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++){
        char ss[51];
        string temp;
        scanf("%s", ss);
        temp = string(ss);
        vector<string>::iterator p = words.begin();
        if(find(words.begin(), words.end(), temp) == words.end()){
            words.push_back(temp);
        }
    }
    sort(words.begin(), words.end(), comp);
    vector<string>::iterator p = words.begin();
    while (p != words.end()){
        printf("%s\n", (*p).c_str());
        p++;
    }
}