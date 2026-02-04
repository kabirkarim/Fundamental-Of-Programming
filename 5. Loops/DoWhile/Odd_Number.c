#include<stdio.h>
/*
Create a program that uses a do-while loop to print odd numbers from 1 to 19.
*/
int main (){
    int n=1;
    do
    {
        printf("%d\n",n);
        n+=2;
    } while (n<=19);
    
    return 0;
}