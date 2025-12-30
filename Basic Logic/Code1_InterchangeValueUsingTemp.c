#include<stdio.h>
int main(){
    int a,b, Temp;
    printf("Enter 2 Integers..\n");
    printf("Enter 1st Integer:");
    scanf("%d", &a );
    printf("Enter 2nd Integer:");
    scanf("%d", &b );
    Temp= b;
    b=a;
    a=Temp;
    printf("AFTER REVERSING THE VALUES \n 1st Integer: %d \n 2nd integer: %d",  a, b);
return 0;
}