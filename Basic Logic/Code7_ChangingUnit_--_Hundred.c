#include<stdio.h>
int main(){
      int num, a,b,c,d,e;
    printf("Enter a 5 Digit Integer:");
    scanf("%d",&num);
     a= num%10;
    b= (num/10) %10;
    c= (num/100 ) %10;
    d= (num/1000 ) %10;
    e= (num/10000) ;
    printf("%d%d%d%d%d", e,d,a,b,c);

return 0;
}