#include <stdio.h>
int main() {
    int n1, n2; //size of Array
    int i; //for loop Control
    printf("Enter size of first array: "); //Taking size of array 1
    scanf("%d", &n1);
    int a[n1]; // Creating array
    printf("Enter Values For first array:\n");
    for(i = 0; i < n1; i++) {   // taking values of array 1
        printf("%d Value of 1st Array: ", i+1);
        scanf("%d", &a[i]);
    }
    printf("Enter size of second array: "); //Taking size of array 2
    scanf("%d", &n2);
    int b[n2], c[n1+n2]; // creating array 2 and Array3(Merging Array)
    printf("Enter Values For second array: \n"); // taking values of array 2
    for(i = 0; i < n2; i++){ 
        printf("%d Value of 2nd Array: ", i+1);
        scanf("%d", &b[i]);}
    //Merging 2 Array into 3rd array
    for(i = 0; i < n1; i++) // marging 1st array in merging array
        c[i] = a[i];

    for(i = 0; i < n2; i++) // marging 2nd array in merging array
        c[n1 + i] = b[i];

    printf("Merged array:\n"); //Display Merged Array
    for(i = 0; i < n1 + n2; i++)
        printf("%d ", c[i]);

    return 0;
}
