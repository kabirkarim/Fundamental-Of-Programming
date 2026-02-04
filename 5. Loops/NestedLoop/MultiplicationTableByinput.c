#include<stdio.h>

int main (){
    int table;
    printf("Enter Table no: ");
    scanf("%d",&table);
    for(int x =1 ; x<=10;x++){
        printf("%3d x%3d =%4d \n",table,x,table * (x));
    }
    return 0;
}