#include<stdio.h>
int main(){
     int a,b;
    printf("Enter 2 Integers..\n");
    printf("Enter 1st Integer:");
    scanf("%d", &a );
    printf("Enter 2nd Integer:");
    scanf("%d", &b );
    a = a + b;
    b = a - b;
    a = a - b;
    printf("After swapping:\n 1st Integer= %d \n 2nd Integer = %d\n", a, b);
return 0;
}