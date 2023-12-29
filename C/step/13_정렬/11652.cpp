#include <cstdio>
#include <algorithm>
int N, i;
struct cd{
    int x, y;
};
cd a[100000];
bool comp(cd w, cd e){
    return w.y==e.y ? w.x<e.x : w.y<e.y;
}
int main(){
    scanf("%d", &N);
    for(i=0;i<N;i++){
        scanf("%d %d", &a[i].x, &a[i].y);
    }
    std::sort(a, a+N, comp);
    for(i=0;i<N;i++){
        printf("%d %d\n", a[i].x, a[i].y);
    }
}