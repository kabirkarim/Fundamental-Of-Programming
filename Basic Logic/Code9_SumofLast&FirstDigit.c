#include<stdio.h>
int main(){
    int num,a ,b;
    printf("Enter a 4 digit Integer:");
    scanf("%d", &num);
    a=num%10;
    b=num/1000;
    printf("The sum of last & First Digit is: %d", a+b);
return 0;
}