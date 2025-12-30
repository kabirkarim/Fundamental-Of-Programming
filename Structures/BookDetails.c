#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book b[4];
    int i, maxIndex = 0;

    for(i = 0; i < 4; i++) {
        printf("\nEnter details of book %d\n", i+1);
        printf("Title: ");
        scanf("%[^\n]", b[i].title);
        getchar();
        printf("Author: ");
        scanf("%[^\n]", b[i].author);
        getchar();
        printf("Price: ");
        scanf("%f", &b[i].price);
        getchar();
    }

    for(i = 1; i < 4; i++) {
        if(b[i].price > b[maxIndex].price) {
            maxIndex = i;
        }
    }

    printf("\nBook with Highest Price:\n");
    printf("Title: %s\nAuthor: %s\nPrice: %.2f\n",
           b[maxIndex].title, b[maxIndex].author, b[maxIndex].price);

    return 0;
}
