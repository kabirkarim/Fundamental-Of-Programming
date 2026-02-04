#include<stdio.h>
/* Output:
  1 
  2   3
  4   5   6
  7   8   9  10
 11  12  13  14  15
 16  17  18  19  20  21
 */

int main (){
    int height =6,num=1;
    for(int x=1 ; x<=height;x++){
        for(int y =1;y<=x;y++){
            printf(" %2d ", num);
            num++;
        }
        printf("\n");
    }
    return 0;
}