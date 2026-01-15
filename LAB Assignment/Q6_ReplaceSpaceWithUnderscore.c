// Q6: Replace all spaces in a string with underscores (_) without using string library functions.

#include <stdio.h>
int main(){
    char sen[100];
    printf("Enter a Sentance: "); //Input the Sentance
    fgets(sen,100,stdin);
    for(int i=0; sen[i]!='\0'; i++){ // For loop for reading a string by its index
        if(sen[i] == ' '){ // If the for loop Find the Space in String 
            sen[i]='_'; // Replace it by underscores
        }
    }
    printf("After Replacing Space by underscores: %s", sen); 
    return 0;
}