#include <stdio.h>

/* Function to find maximum element in array */
int findMax(int arr[], int size) {
    int max = arr[0];

    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int arr[100], size, maxValue;

    /* Taking size of array */
    printf("Enter number of elements: ");
    scanf("%d", &size);

    /* Taking array elements */
    printf("Enter %d integers:\n", size);
    for(int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    /* Calling findMax function */
    maxValue = findMax(arr, size);

    /* Printing maximum value */
    printf("Maximum value = %d\n", maxValue);

    return 0;
}
