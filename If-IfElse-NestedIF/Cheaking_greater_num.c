/*Write a C program to check the first number is greater than the second number.*/

#include <stdio.h> 
int main(){
    int a,b;
    printf("Enter 2 Numbers \n");
    printf("Enter 1st Number:");
    scanf("%d",&a);
    printf("Enter 2 Numbers:");
    scanf("%d",&b);
    if(a<b){
        printf( "%d is greater then %d", b,a);
    }
    else if(a==b){
        printf("%d is equall to %d", a,b);
    }
    else {
        printf("%d is greater then %d", a,b);
    }
    
 return 0;
}