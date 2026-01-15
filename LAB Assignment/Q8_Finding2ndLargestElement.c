// Q8: Input 10 integers and find the second largest element.

#include<stdio.h>
int main() {
    int arr[10];
    int max,max2;
    printf("Enter 10 Integer in an Array:\n");
    for(int i=0; i<10; i++){    //taking 10 integer in an Array
        printf("enter %d Integer:", i+1);
        scanf("%d", & arr[i]);
    }
   // giving the value of max and 2nd max(max2) from 1st and 2nd Integer
    if(arr[0]>arr[1]){ 
        max=arr[0];
        max2=arr[1];
    }
    else{
        max=arr[1];
        max2=arr[0];
    }
    // cheaking the another max and max2
     for(int i=2; i<10; i++){
        if(arr[i]>max){ // if the Array Integer is max 
            max2=max; // 2nd highest will be max
            max=arr[i]; // highest will be integer
        } 
        else if (arr[i]>max2 && arr[i]!=max){ // if we found the integer greater than max and lower than max2(2nd highest)
            max2=arr[i]; // max 2 will be that Integer
        }
     }
     //printing the largest and 2nd largest.
    printf("The Largest Number in the array is %d\n", max);
    printf("The 2nd Largest Number in the array is %d", max2);
    return 0;
}
