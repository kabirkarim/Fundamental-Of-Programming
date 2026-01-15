//Q3: Write a recursive function to reverse an integer number.
#include <stdio.h>
int reverse(int num, int rev) {
    if (num == 0)
        return rev; // As number becomes 0, return reversed number
    else
    return reverse(num / 10, rev * 10 + (num % 10)); // take last digit and add it to reversed number
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("Reversed number: %d", reverse(num, 0)); // calling a recursive function
    return 0;
}
