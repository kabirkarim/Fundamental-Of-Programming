#include<stdio.h>
int main(){
    //code 01: To interchange 2 Variable Value
    // int a,b, Temp;
    // printf("Enter 2 Integers..\n");
    // printf("Enter 1st Integer:");
    // scanf("%d", &a );
    // printf("Enter 2nd Integer:");
    // scanf("%d", &b );
    // Temp= b;
    // b=a;
    // a=Temp;
    // printf("The Value of 1st Integer is %d and the Value Of 2nd Integer is %d",  a, b);

     // Code 2: Swapping Value Without Using Temp
    // int a,b;
    // printf("Enter 2 Integers..\n");
    // printf("Enter 1st Integer:");
    // scanf("%d", &a );
    // printf("Enter 2nd Integer:");
    // scanf("%d", &b );
    // a = a + b;
    // b = a - b;
    // a = a - b;
    // printf("After swapping:\n 1st Integer= %d \n 2nd Integer = %d\n", a, b);

    //Code 3:. Find unit, ten, hundred, thousand, and ten-thousands of a 5-digit number + sum
    // int  num, a,b,c,d,e, sum;
    // printf("Enter a 5 Digit integer:\n");
    // scanf("%d", &num );
    // a= num%10;
    // b= (num/10) %10;
    // c= (num/100 ) %10;
    // d= (num/1000 ) %10;
    // e= (num/10000)  ;
    // printf("Unit:%d, Ten:%d, Hundred:%d, Thousand:%d, Ten Thousand:%d ", a,b,c,d,e);
    // sum=a+b+c+d+e;
    // printf("\n The  indevidually digit is :%d ", sum);

    //code 4: Area and circumference of a circle
    // float r;
    // printf("Enter radius of circle: ");
    // scanf("%f", &r);
    // printf("Area = %f\n", 3.142 * r * r);
    // printf("Circumference = %f\n",2 * 3.142 * r);

    //code 5 Percentage marks of a student in 5 subjects
    // int s1,s2,s3,s4,s5,sum;
    // printf("Enter Your MARKS in 5 different Subjects (out of 100) \n");
    // printf("Marks of Subject 01=");
    // scanf("%d", &s1);
    // printf("Marks of Subject 02=");
    // scanf("%d", &s2);
    // printf("Marks of Subject 03=");
    // scanf("%d", &s3);
    // printf("Marks of Subject 04=");
    // scanf("%d", &s4);
    // printf("Marks of Subject 05=");
    // scanf("%d", &s5);
    // sum= s1+s2+s3+s4+s5;
    // printf("Your total marks is %d \n ", sum);
    // float Percentage= sum*100/500;
    // printf("Your Percentage is %.2f %% \n", Percentage);

    //Code 6 Print size of data types in C
    // printf("Size of char: %zu byte", sizeof(char));
    // printf("Size of float: %zu byte", sizeof(float));
    // printf("Size of int: %zu byte", sizeof(int));
    // printf("Size of double: %zu byte", sizeof(double));
   
    //Code 7 Reverse unit digit with hundred digit in a 5-digit number
    // int num, a,b,c,d,e;
    // printf("Enter a 5 Digit Integer:");
    // scanf("%d",&num);
    //  a= num%10;
    // b= (num/10) %10;
    // c= (num/100 ) %10;
    // d= (num/1000 ) %10;
    // e= (num/10000) ;
    // printf("%d%d%d%d%d", e,d,a,b,c);

    //Code 8 Reverse a 4-digit number
    // int num,a ,b,c,d;
    // printf("Enter a 4 digit Integer:");
    // scanf("%d", &num);
    // a=num%10;
    // b=(num/10) %10;
    // c=(num/100)%10;
    // d=num/1000;
    // printf("%d%d%d%d", a,b,c,d);

    //Code 9 Sum of first and last digit of a 4-digit number
    // int num,a ,b;
    // printf("Enter a 4 digit Integer:");
    // scanf("%d", &num);
    // a=num%10;
    // b=num/1000;
    // printf("The sum of last & First Digit is: %d", a+b);




    return 0;
}