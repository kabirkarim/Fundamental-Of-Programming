#include<stdio.h>

/*
Design a program that calculates the factorial of a number entered by the user using a for loop. The
factorial of a number is the product of all positive integers from 1 to that number.
*/
int main (){
    int i,num,factorial =1;
    printf("Enter a number for factorial:");
    scanf("%d",&num);
    for(i = 1;i<=num;i++){ // i will start from 1 till the factorial num (eg :5)
        factorial *=i; // factorial = factorial * i 
    }
    printf("%d",factorial);
    return 0;
}