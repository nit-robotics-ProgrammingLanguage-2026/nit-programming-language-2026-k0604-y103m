#include <stdio.h>
int main(void){int a;long s=0;scanf("%d",&a);if(a<0){printf("NG");return 0;}for(int i=1;;i++){if(i>a)break;if(i%3==0||i%5==0)continue;s+=i;}printf("%ld",s);return 0;}
