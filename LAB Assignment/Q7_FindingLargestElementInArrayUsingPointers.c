// Q7: Find the largest number in an array using pointers.
#include<stdio.h>
int main() {
    int arr[10] = {10,20,30,40,50,60,70,80,100,90};
    int *ptr = arr;
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = *ptr;   // assume first element is largest

    for(int i = 1; i < size; i++) { //loop to access the array elements one by one
        if(*(ptr + i) > max) { //IF the arrayElement is greater than Varriable Max
            max = *(ptr + i); // Max will be Equall To That arrayElement 
        }
    }
    printf("The Largest Element in the array is %d", max); // Printing Max
    return 0;
}

