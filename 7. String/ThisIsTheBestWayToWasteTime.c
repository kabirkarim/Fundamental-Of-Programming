#include<stdio.h>
#include<string.h>

int main (){
    // Method 1 --> using single array 
    // char str[]= "this is the best way to waste the time ";
    // int i =0;
    // int spc = 0;
    // int count =0;
    // // Logic 1 (Sir Asim Riaz) -- > using single loop
    // while(str[i]!= '\0'){
    //     printf("%c",str[i]);
    //     if(str[i] == 32 && count == spc){
    //         count++;
    //         printf("\n");
    //         i = -1;
    //         spc = 0;
    //     }
    //     if(str[i]==32){
    //         spc++;
    //     }
    //     i++;
    // }

    // Logic 2 -- > using nested loop
    // while(str[i]!='\0'){
    //     if(str[i] == 32){
    //         for(int j =0;j<i;j++){
    //             printf("%c",str[j]);
    //         }
    //         printf("\n");
    //     }
    //     i++;
    // }

    // Method 2 --> using 2 arrays and loop
    // char str[]= "this is the best way to waste the time ";
    // int i =0;
    // char str1[sizeof(str)];
    // while(str[i]!= '\0'){

    //     if(str[i]==32){
    //         printf(" %s\n",str1);
    //     }
    //     str1[i] = str[i];
    //     str1[i+1] = '\0';
    //     i++;
    // }

    // method 3 --> using 2 arrays and strncpy function
    char str[]= "this is the best way to waste the time ";
    char str1[sizeof(str)];
    int i =0;
    while (str[i]!= '\0')
    {
        str1[i+1]='\0';
        if(str[i] ==32){
            strncpy(str1,str,i);
            printf("%s\n",str1);
        }
        i++;
    }
    
    return 0;
}