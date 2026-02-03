// Write a C program that uses a for loop to print all even numbers from 2 to 20.

#include<stdio.h>
int main (){
    int i;
    for(  i=2 ; i<=20;++i){
        if(i%2 == 0){ // checks the remainder is zero or not when divided by 2
            printf("%d\n",i); // prints the i if the remainder is zero
        }
    }
    return 0;
}
/*
Output:
2
4
6
8
10
12
14
16
18
20
*/