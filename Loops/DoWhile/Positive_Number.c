#include<stdio.h>
/*
Write a C program that uses a do-while loop to prompt the user to enter a positive number. Keep prompting until a valid positive number is entered.
*/
int main (){
    int num;
    do{
        printf("Enter a number:");
        scanf("%d",&num);
    }while(num<0);
    return 0;
}