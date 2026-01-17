// Read Numbers.txt and calculate the sum of all stored numbers
#include <stdio.h> 
int main(){
    FILE *fp; //File
    int num,sum=0; //variables
    fp=fopen( "D:\\Fundamental Of Programming\\LAB Assignment\\Numbers.txt","r"); //open a file
    if(fp==NULL){       //Checking File Opened or not
        printf("File Cannot be oppen");
        return 0;
    }
   while (fscanf(fp, "%d", &num) != EOF) { //read unitil the end of file reached
        sum += num; // sum the numbers
    }
    fclose(fp); // Close file
    printf("Sum of all numbers = %d\n", sum);
    return 0;
}