#include <cstdio>
#include <string>
using namespace std;
int main(){
    int N, i, cnt=0;
    string t;
    scanf("%d", &N);
    for(i=666;;i++){
        t = to_string(i);
        if(t.find("666")!=string::npos){
            cnt++;
        }
        if(cnt==N){
            printf("%s", t.c_str());
            return 0;
        }
    }
}