#include <stdio.h>
int main(){
    char s[6] = {'F', 'D', 'C', 'B', 'A', 'A'};
    int score;
    scanf("%d", &score);
    score -= 50;
    if(score < 0 )score = 0;
    printf("%c", s[score/10]);
}