//Q1-Input 15 integers into an array. Count even and odd numbers and store odd numbers in a new array.
#include <stdio.h>
int main(){
    int arr[15];
    int size=sizeof(arr)/sizeof(arr[0]); //finding the size of the array
    int oddarr[size]; //odd array size is same as the orignal arry as in orignal array all elements can be odd
    int even=0,odd=0, j=0;
    printf("Enter integers in array\n");
    for(int i=0;i<size;i++){
        printf("Enter an integer at %d Position:", i+1);
        scanf("%d", &arr[i]); // Taking input of the integers
        if(arr[i]%2==0) {
            even++; //if the integer is even, Variable will increase by 1 
        }
        else {
            odd++; //if the integer is not even, Variable will increase by 1
            oddarr[j]=arr[i]; // fillling the odd array 
            j++; // j is the index number of odd array
        }
    }
    printf("\nEven Numbers are %d and Odd Numbers are %d.\n", even, odd); //displaying the even and odd 
    printf("Odd array= "); // displaying the odd array:
    for(int i=0; i<j; i++){
        printf("%d ", oddarr[i]);
    }   
    return 0;
}