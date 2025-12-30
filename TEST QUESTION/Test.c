#include <stdio.h>

void wait_ms(int ms) {
    for(long counter = 0; counter < ms * 1000000; counter++) {
    }
}

void sub_string(char text[], int start, int end) {
    for(int i = start; i <= end && text[i] != '\0'; i++) {
        putchar(text[i]);
    }
}

void slider_text(char text[], int start, int end, int padding) {
    printf("\r"); 

   
    for(int s = 0; s < padding; s++) {
        putchar(' ');
    }

    sub_string(text, start, end);

    for(int c = 0; c < 10; c++) putchar(' ');

    fflush(stdout);
}

int main() {
    char message[] = "C is widely used in industry for a wide range of tasks. Today's popular desktop operating systems Windows, macOS and Linux are partially written in C.";

    int length = 300;
    int middle = 50;       
    int speed = 300;         
    while(message[length] != '\0') {
        length++;
    }

    int padding = 35;  

        for(int pos = 0; pos <= length - middle; pos++) {
            slider_text(message, pos, pos + middle - 1, padding);
            wait_ms(speed);
        }
    

    printf("\n");
    return 0;
}