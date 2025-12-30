#include <stdio.h>

int main() {
    int n;
    int arr[10];

    printf("Enter height of triangle: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        arr[i] = i + 1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++)
            printf("%d ", arr[j]);
        printf("\n");
    }

    return 0;
}
