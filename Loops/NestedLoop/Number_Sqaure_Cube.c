#include<stdio.h>

int main (){
    int square,cube;
    printf("Number\t\tSquare\t\tCube\n");
    for(int x =1;x<=10;x++){
        for(int y =1;y<=3;y++){
            square=x*x;
            cube=x*x*x;
            if(y==1)printf("%d\t\t",x);
            else if(y==2)printf("%d\t\t",square);
            else if(y==3)printf("%d\t\t",cube);
        }
        printf("\n");
    }
    return 0;
}