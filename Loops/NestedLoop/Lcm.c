#include<stdio.h>

int main (){
    int div,num=0;
    for(int x =2;x<=100;x++){
        num = x; // num is the copy of the x, so we can change the values of num later
        div =2;
        printf("%3d:  ",num);
        while(num!=1){
            if(num%div ==0){ // num is divisible by div (2 = default) or not
                if(x==div){
                    printf("%d\n",x);
                }
                num /=div; // if yes it will divide num by div (default ==> x / 2)
                // printf("%d ",div);
            }else{
                div++; // if no, it will increment the value of div by 1
            }
        }
        printf("\n");
        // printf("%d\n",x);
    }
    return 0;
}