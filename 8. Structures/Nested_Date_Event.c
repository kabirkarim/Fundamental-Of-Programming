#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Event {
    char name[50];
    struct Date eventDate;
};

int main() {
    struct Event e[3];
    int i;

    for(i = 0; i < 3; i++) {
        printf("\nEnter details of event %d\n", i+1);
        printf("Event Name: ");
        scanf("%s", e[i].name);
        printf("Day: ");
        scanf("%d", &e[i].eventDate.day);
        printf("Month: ");
        scanf("%d", &e[i].eventDate.month);
        printf("Year: ");
        scanf("%d", &e[i].eventDate.year);
    }

    printf("\nEvent Details:\n");
    for(i = 0; i < 3; i++) {
        printf("\nEvent Name: %s", e[i].name);
        printf("\nDate: %d/%d/%d\n",
               e[i].eventDate.day,
               e[i].eventDate.month,
               e[i].eventDate.year);
    }

    return 0;
}
