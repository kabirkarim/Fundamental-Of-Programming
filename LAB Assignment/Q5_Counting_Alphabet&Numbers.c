// Q5: Input a sentence and count uppercase letters, lowercase letters, and digits.
#include <stdio.h>
int main() {
    char sen[100];
    int low=0,upp=0,num=0; // variable for counting
    printf("Enter a Sentance: "); //Input the Sentance
    fgets(sen,100,stdin);
    
    for(int i=0; sen[i] != '\0'; i++){ // For loop for the Read String Through index
        if(sen[i]>=65 && sen[i]<=90){
            upp++; // variable Increment by 1 If The uppercase Letter Will come in String Index 
        }
        else if(sen[i]>=97 && sen[i]<=122){
            low++; // variable Increment by 1 If The lowercase Letter Will come in String Index
        }
        else if(sen[i]>='0' && sen[i]<='9'){
            num++;// variable Increment by 1 If The A Numbers Will come in String Index
        }
    }
    printf("The lowercase letters Are %d. \nThe uppercase letters Are %d.", low,upp); 
    printf("\nThe Numbers are %d.", num); // printing the Value of The variables -- low,upp,num --
    return 0;
}
