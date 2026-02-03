#include<stdio.h>
/*
Output:
~~~~@~~~~
~~~@@@~~~
~~@@@@@~~
~@@@@@@@~
@@@@@@@@@
~@@@@@@@~
~~@@@@@~~
~~~@@@~~~
~~~~@~~~~
*/

int main (){
    printf("\n");
    int asteriks, count,middle, values_in_row = 4,start_space =4,end_space =6;
    asteriks = middle =1;
    for ( count = 0; count < 9; count++)
    {
        // printf("%d \t",asteriks); // 1 3 5 7 9 7 5 3 1
        // printf("%d \t",middle); // 1 3 5 7 9 11 13 15 17
        // printf("%d \t",start_space); // 4 3 2 1 0 1 2 3 4
        // printf("%d \n",end_space); // 6 7 8 9 10 9 8 7 6
        for(int j =1;j<=9;j++){
            (j>start_space && j<end_space)?printf("@"):printf("~");
        }
        if(middle<9){ // runs till the veritcal middle point is met
            start_space --;
            end_space ++;
            asteriks+=2;
            middle+=2;
        }else{  // starts reversing the value of asteriks , start_space, end_space after the middle horizontal line 
            start_space++;
            end_space--;
            middle+=2; // at end of the loop middle = 17
            asteriks-=2;
        }
        printf("\n");
    }
    printf("\n");

    
    return 0;
}