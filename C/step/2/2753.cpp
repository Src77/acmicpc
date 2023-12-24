#include<ios>
main(int x){scanf("%d",&x);printf("%d",!(x%4)&!!(x%100)|!(x%400));}