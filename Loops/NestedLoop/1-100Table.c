#include<stdio.h>

int main (){
    int table=1,limit=10;
    
    for(int x = 1;x<=10;x++){
        for(int y =1 ; y<=10;y++){
            for(int z =limit-9; z<=limit; z++){
                printf("%3d x%2d =%3d   ",z,table,z*table);
            }
            table++;
            printf("\n");
        }
        table =1;
        limit+=10;
        printf("\n");
    }
    return 0;
}