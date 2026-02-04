#include <stdio.h>

int main() {
    int n;
    int arr[10];

    printf("Enter size of square: ");
    scanf("%d", &n);

    for(int i = 0; i < n; i++)
        arr[i] = 1;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++)
            printf("%d ", arr[j]);
        printf("\n");
    }

    return 0;
}
