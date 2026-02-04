#include <stdio.h>
/*
Write a program that takes a number as input and uses a do-while loop to reverse and print the digits of that number. For example, if the input is 12345, the program should print 54321.
*/
int main()
{
    int value = 12345, rem, rev = 0;
    do
    {
        rem = value % 10;
        value /= 10;
        rev = rev * 10 + rem;
    } while (value > 0);
    printf("%d", rev);

    return 0;
}