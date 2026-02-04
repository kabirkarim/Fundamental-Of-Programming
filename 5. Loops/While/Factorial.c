#include<stdio.h>

/*
Design a program that calculates the factorial of a number entered by the user using a while loop. The factorial of a number is the product of all positive integers from 1 to that number.
*/
int main (){
    int n,factorial=1,count=1;
    printf("Enter a number:");
    scanf("%d",&n);
    while (count<=n)
    {
        factorial*=count;
        count++;
    }
    printf("%d",factorial);
    

    return 0;
}