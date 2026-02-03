#include<stdio.h>

/*
Write a program that takes a number as input and uses a while loop to reverse and print the digits of that number. For example, if the input is 12345, the program should print 54321.
*/
int main (){
    int number,reverse=0,remainder;
    printf("Enter a number:");
    scanf("%d",&number);
    while (number>=1)
    {
        remainder=number%10;
        reverse=reverse*10 +remainder;
        number/=10;
    }
    printf("%d",reverse);
    
    return 0;
}