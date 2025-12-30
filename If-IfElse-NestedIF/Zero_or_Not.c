/*Write a program to check whether the number entered by the user is zero or not*/
#include <stdio.h> 
int main(){
     int a;
    printf("Enter a Number:");
    scanf("%d",&a);
    if(a==0){
        printf("Entered number is Zero");
    }
    else{
        printf("Enrered number is not Zero");
    }
   
 return 0;
}