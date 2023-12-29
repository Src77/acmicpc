#include <cstdio>
#include <algorithm>
#include <cstring>
char a[13];
int main(){
    fgets(a, 13, stdin);
    a[strcspn(a, "\n")]=0;
    std::sort(a, a+strlen(a), std::greater<char>());
    puts(a);
}