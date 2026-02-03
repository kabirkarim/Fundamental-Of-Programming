#include<stdio.h>

int main (){
    printf("\n");
    int asteriks, count,middle, values_in_row,num=65,limit = 7;
    asteriks = middle =1;
    values_in_row = (limit/2)+1;
    for ( count = 0; count < limit; count++)
    {
        // printf("%d \t",asteriks);
        // printf("%d \t",middle);
        // printf("%d \n",values_in_row);
        for(int j =0;j<values_in_row;j++){
            // printf("*");
            // num>limit?num=0:printf("");
            j<values_in_row-asteriks?printf(" "):printf("%c",num++);
        }
        if(middle<limit){
            asteriks+=2;
            middle+=2;
            values_in_row++;
        }else{
            values_in_row--;
            middle+=2;
            asteriks-=2;
        }
        printf("\n");
    }
    printf("\n");

    
    return 0;
}