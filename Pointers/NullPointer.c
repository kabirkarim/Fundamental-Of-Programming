#include <stdio.h>

int main() {
    int *ptr = NULL;

    if(ptr == NULL) {
        printf("Pointer is NULL, not pointing to any memory.\n");
    } else {
        printf("Value = %d\n", *ptr);
    }

    return 0;
}
