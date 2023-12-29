#include <cstdio>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;
struct member{
    int age;
    string name;
};
bool comp(member a, member b){
    return a.age<b.age;
}
int main(){
    int i, N;
    vector<member> lis;
    scanf("%d", &N);
    for(i=0;i<N;i++){
        int tage;
        char temp[101];
        scanf("%d %s\n", &tage, temp);
        member t;
        t.age = tage;
        t.name = string(temp);
        lis.push_back(t);
    }
    stable_sort(lis.begin(), lis.end(), comp);
    for(auto p = lis.begin();p!=lis.end();p++){
        printf("%d %s\n", (*p).age, (*p).name.c_str());
    }
}