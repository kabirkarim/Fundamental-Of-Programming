#include<stdio.h>
// Function to calculate nth Fibonacci number using recursion
int fibonacci(int n) {
    if (n <= 1) {   //return if num is less than 1 
        return n;  
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
    }
}
int main() {
    int n;
    printf("Enter a number for nth Fibonacci series: ");
    scanf("%d", &n);
    // Loop to print first n Fibonacci numbers
    for (int i = 0; i < n; i++) {
        printf("%d\t", fibonacci(i));
    }
  return 0;      
}
