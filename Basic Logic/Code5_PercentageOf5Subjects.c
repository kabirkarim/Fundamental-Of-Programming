#include<stdio.h>
int main(){
     int s1,s2,s3,s4,s5,sum;
    printf("Enter Your MARKS in 5 different Subjects (out of 100) \n");
    printf("Marks of Subject 01=");
    scanf("%d", &s1);
    printf("Marks of Subject 02=");
    scanf("%d", &s2);
    printf("Marks of Subject 03=");
    scanf("%d", &s3);
    printf("Marks of Subject 04=");
    scanf("%d", &s4);
    printf("Marks of Subject 05=");
    scanf("%d", &s5);
    sum= s1+s2+s3+s4+s5;
    printf("Your total marks is %d \n ", sum);
    int Percentage= sum*100/500;
    printf("Your Percentage is %d %% \n", Percentage);

return 0;
}