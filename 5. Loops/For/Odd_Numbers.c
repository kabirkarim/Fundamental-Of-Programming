#include<stdio.h>

// Create a program that uses a for loop to print all odd numbers from 1 to 19.
int main (){
    int i;
    for( i =1; i<=19;i++){
        if(i%2 != 0){ // checks if i is divisible by 2 or not
            printf("%d\n",i); // if no then print i
        }
    }
    return 0;
}
/*
Output:
1
3 
5 
7 
9 
11
13
15
17
19*/