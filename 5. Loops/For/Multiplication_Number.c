#include <stdio.h>

/*
Write a C program to generate the multiplication table for a number entered by the user using a for
loop. For example, if the user enters 5, the program should print the multiplication table for 5 up to
a specified range.
*/
int main()
{
    int i,num;
    printf("Enter a number for table:");
    scanf("%d",&num); // takes input and save it to num
    for( i=1; i<=10;i++){
        printf("%d x %2d =%4d\n",num,i,num*i); 
    }
    return 0;
}
/*
Output: for num 10
Enter a number for table:10
10 x  1 =  10
10 x  2 =  20
10 x  3 =  30
10 x  4 =  40
10 x  5 =  50
10 x  6 =  60
10 x  7 =  70
10 x  8 =  80
10 x  9 =  90
10 x 10 = 100
*/