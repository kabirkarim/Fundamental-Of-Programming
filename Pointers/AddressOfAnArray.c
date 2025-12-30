#include <stdio.h>

int main() {
    int arr[10];

    printf("Enter 10 integers:\n");
    for(int i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    printf("Memory addresses of array elements:\n");
    for(int i = 0; i < 10; i++)
        printf("arr[%d] = %d, Address = %p\n", i, arr[i], &arr[i]);

    return 0;
}
