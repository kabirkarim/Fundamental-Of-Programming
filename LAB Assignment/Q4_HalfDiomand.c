// Q4- Printing Half Diamond using Nested Loops
// Output:
//  Enter the number of rows: 8
//         *        
//        * *       
//       * * *      
//      * * * *     
//     * * * * *    
//    * * * * * *   
//   * * * * * * *  
//  * * * * * * * * 
 #include <stdio.h>
int main() {
    int n;
    printf("Enter the number of rows: "); //Taking No. of rows
    scanf("%d", &n);
    for(int i=1; i<=n; i++){ // for loop till no of rows
        for(int k=1; k<=n-i; k++ ){ // for loop for spaces 
            printf(" ");   // prints (n - i) spaces to shift stars to the right
        }
        for(int j=1; j<=i; j++){ // for loop for asterics
            printf("* "); //print i asterics
        }
        printf("\n");
    }
    

    return 0;
}
