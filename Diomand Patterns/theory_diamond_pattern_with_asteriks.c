#include <stdio.h>

int main()
{
    int spc = 4; // starting diamond white space
    int hl = 5; // total values of horizontal loops (inner - loop)
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= hl; j++)
        // for loop is run till hl values
        {
            // if j is greater than white space it will print asteriks (*)
            // else it will print white space
            j>spc ?printf("*"):printf(" ");
        }
        printf("\n");
        
        if(i>9/2){
            hl--;
            spc++;
        }else{
            spc--;
            hl++;
        }
    }
    return 0;
}