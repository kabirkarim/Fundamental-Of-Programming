#include<stdio.h>
int main(){
         int num,a ,b,c,d;
    printf("Enter a 4 digit Integer:");
    scanf("%d", &num);
    a=num%10;
    b=(num/10) %10;
    c=(num/100)%10;
    d=num/1000;
    printf("%d%d%d%d", a,b,c,d);

return 0;
}