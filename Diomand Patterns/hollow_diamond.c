#include<stdio.h>
/*Write a C program that uses nested for loops to print a hollow diamond shape composed of asterisks (*) and spaces. The program should accept a single odd integer input (e.g., 9) representing the width of the diamond at its widest point. The shape must be perfectly centered and symmetric. The most challenging part is ensuring only the border of the diamond is printed (hollow interior).*/
int main (){
    int limit = 9,hrz_loop_counter =5,spc=4;
    for(int x =1 ;x<=limit;x++){
        for(int y =1;y<= hrz_loop_counter ;y++){
            y == spc+1 ||y==hrz_loop_counter ?printf("#"):printf(" ");
        }
        // printf("%d\t",hrz_loop_counter);
        // printf("%d",spc);
        if(x<5){
            spc--;
            hrz_loop_counter ++;
        }else{
            spc++;
            hrz_loop_counter--;
        }

        printf("\n");
    }
    return 0;
}