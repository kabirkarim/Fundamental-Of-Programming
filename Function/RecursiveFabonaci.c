#include<stdio.h>
int fibonacci(int n){
    n=5;
    if(n<=1){
        // return n;
    }else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main (){
    int n;
    printf("Enter a number for nth fibonacci series:");
    scanf("%d",&n);
    for(int i =0;i<n;i++){
        printf("%d\t",fibonacci(i));
    }
    return 0;
}