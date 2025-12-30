#include<stdio.h>
int main(){
     int  num, a,b,c,d,e, sum;
    printf("Enter a 5 Digit integer:\n");
    scanf("%d", &num );
    a= num%10;
    b= (num/10) %10;
    c= (num/100 ) %10;
    d= (num/1000 ) %10;
    e= (num/10000)  ;
    printf("Unit:%d, Ten:%d, Hundred:%d, Thousand:%d, Ten Thousand:%d ", a,b,c,d,e);
    sum=a+b+c+d+e;
    printf("\n The  indevidually SUM digit is :%d ", sum);
return 0;
}