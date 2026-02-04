#include <stdio.h>

/*
Write a program to generate the Fibonacci sequence up to a specified number of terms using a for
loop. Allow the user to choose the number of terms to generate.
*/
int main()
{
    int count =0, first = 0, second = 1, fibonacci =0;
    printf("Enter a number for fibonacci sequence:");
    scanf("%d",&count);
    // count = (count);
    // printf("%d",count);
    int i;
    for ( i = 1; i <= count; i++)
    {
        switch (i)
        {
        case 1:
            printf("%d\t", first);
            break;
        case 2:
            printf("%d\t", second);
            break;
        default:
            fibonacci = first + second;
            printf("%d\t", fibonacci);
            first = second;
            second =fibonacci;
            break;
        }
    }
    printf("\n");
    // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34
    // 0 + 1 = 1
    // 1 + 1 = 1
    // 1 + 2 = 3
    // 2 + 3 = 5

    return 0;
}