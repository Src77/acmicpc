#include <cstdio>
#include <algorithm>
using namespace std;
struct rem{
    int val;
    int pos;
    int s;
};
bool comp_val(rem a, rem b){
    return a.val < b.val;
}
bool comp_pos(rem a, rem b){
    return a.pos < b.pos;
}
rem a[1000000];
int main() {
    int i, N, cnt;
    scanf("%d", &N);
    for (i = 0; i < N; i++){
        scanf("%d", &a[i].val);
        a[i].pos = i;
    }
    sort(a, a + N, comp_val);
    a[0].s = cnt = 0;
    for (i = 1; i < N; i++){
        if (a[i].val != a[i - 1].val)
            cnt++;
        a[i].s = cnt;
    }
    sort(a, a + N, comp_pos);
    for (i = 0; i < N; i++)
        printf("%d ", a[i].s);
}