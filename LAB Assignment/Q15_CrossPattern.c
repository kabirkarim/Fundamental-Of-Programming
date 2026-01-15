#include<stdio.h>
int main(){
    int n = 5;               
    int variable = 1;        
    int start = 1, end = n;  
    int inc = 1;             
    
    for(int i = 1; i <= n; i++){    // Outer loop controls rows
        for(int j = 1; j <= n; j++){ // Inner loop controls columns
            
            if(j == start || j == end){ // Print number only at start and end positions
                printf("%d", variable);
            }
            else{
                printf(" "); // Print space elsewhere
            }
        }
        // Reverse direction after reaching the middle row
        if(i == (n / 2) + 1)    inc = -1;

        start += inc;        // Move start position
        end -= inc;          // Move end position
        variable += inc;     // Update number value
        puts(" ");           // Move to next line
    }
    return 0;               // Program ends
}
