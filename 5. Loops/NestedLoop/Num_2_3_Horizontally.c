#include<stdio.h>
/*
Number  1       2       3       4       5       6       7       8       9       10  
Square  1       4       9       16      25      36      49      64      81      100 
Cube    1       8       27      64      125     216     343     512     729     1000
*/
int main (){
    int num =1,value;
    for(int y =1;y<=3;y++){
        y==1?printf("Number\t"):printf("");
        y==2?printf("Square\t"):printf("");
        y==3?printf("Cube\t"):printf("");
        for(int x =1; x<=10;x++){
            // printf("%d",y==1?y:"");
            y==1?printf("%d\t",x):printf("");
            y==2?printf("%d\t",x*x):printf("");
            y==3?printf("%d\t",x*x*x):printf("");
        }
        printf("\n");
    }
    return 0;
}