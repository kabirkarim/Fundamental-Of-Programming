//Q2: Write a function to calculate the average of array elements.
#include <stdio.h>
float average(int *ptr , int size){
    
    float sum=0, avg; // Declaring 2 variable, sum & avg
    for(int i=0; i<size; i++){
        sum=sum+*(ptr+i); // suming the all elements in array
    }
    avg= sum/size; // finding the average
    return avg; // return the avg 
}
int main(){
    int arr[]={1,2,3,4,6}; // declaring and initializing the array
    int size= sizeof(arr)/sizeof(arr[0]); //finding the size of the array
    int *ptr=arr; // pointing the pointer to the array
    
    printf("The average of the array is %.1f .",average(ptr,size)); // calling the function and printing the avg of arr integers
    
    return 0;
}
