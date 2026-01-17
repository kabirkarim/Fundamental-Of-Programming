// Q12: Create a file Numbers.txt and store 10 integers in it.
#include <stdio.h> 
int main(){
    FILE *fp;   //Making a file pointer
    int arr[10]; //Declare an Array for Inputs and wirting the inputs in File
    fp=fopen("D:\\Fundamental Of Programming\\LAB Assignment\\Numbers.txt", "w"); // opening a file
    if(fp==NULL){   //checking file has open or not 
        printf("File Doesn't access file.");
        return 0;
    }
    for(int i=0; i<10; i++){
        printf("Enter Number %d: ", i+1); // Prompt
        scanf("%d", &arr[i]);           //Input the numbers
        fprintf(fp,"%d ",arr[i] );      // Writing the numbers in file
    }
    fclose(fp);
     printf("Numbers successfully stored in Numbers.txt\n");    //Msg for successfully Stored in File
 return 0;
}