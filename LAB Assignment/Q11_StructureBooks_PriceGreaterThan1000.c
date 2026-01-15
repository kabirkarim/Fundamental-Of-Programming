//Q11: Create a structure Book (ISBN, Title, Price). Display all books with price greater than 1000.
#include<stdio.h>
// Structure definition for Book
struct Book {
    int ISBN;           
    char Title[100];        
    float price;        
};
int main(){
    struct Book b[5];   // Array of structures to store 5 books

    // Loop to take input for each book
    for(int i = 0; i < 5; i++){
        printf("\nEnter Details For Book %d:\n", i+1);

        printf("ISBN: ");
        scanf("%d", &b[i].ISBN);

        getchar(); // Clears newline left by scanf

        printf("Title: ");
        fgets(b[i].Title, 100, stdin); 

        printf("Price: ");
        scanf("%f", &b[i].price); 
    }
    // Display books whose price is greater than 1000
    printf("\nThe books whose price is greater than 1000:\n");
    for(int i = 0; i < 5; i++){
        if(b[i].price > 1000){
            printf("ISBN: %d\n", b[i].ISBN);
            printf("Title: %s", b[i].Title);
            printf("Price: %.2f\n", b[i].price);
            puts(" ");
        }
    }
    return 0; 
}
