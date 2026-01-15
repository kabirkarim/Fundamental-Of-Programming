// Q9: Write a function that returns 1 if a number is prime, otherwise 0.
#include<stdio.h>
int Primno(int num){ //Function To Cheack the Number is Prime Or not
    
    for(int i=2; i<=num/2; i++){
        if(num%i==0){ 
           return 0;
            
        }
    }
    return 1;
}
int main(){
    int num;
    printf("Enter A Number: "); 
    scanf("%d", &num);// taking the Number Input
    //Calling Function Primno In IF Condition
    if(Primno(num)){  // if Function returns 1 This If statement Will run
        printf("Function return 1, Means The number is Prime number");
    }
    else{ // if Function returns 0 This If statement Will run
        printf("Function return 0, Means The number is not Prime number");
    }
    return 0;
}
