#include <bits/stdc++.h>
using namespace std;
int main() {
    char a[1001];
    int i, j;
    scanf("%s", a);
    set<string> ss;
    for (i=0;i<strlen(a);i++) {
        for (j=i+1;j<=strlen(a); j++) {
            string temp = string(a + i, a + j);
            ss.insert(temp);
        }
    }
    printf("%d", ss.size());
}