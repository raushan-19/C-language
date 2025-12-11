// print :- 1
//          1 3
//          1 3 5
//          1 3 5 7

#include <stdio.h>   
int main()            
{
    int n;           
    printf("enter your limit : ");  
    scanf("%d",&n);                 
    // Outer loop: runs from 1 to n (controls the number of rows)
    for(int i = 1; i <= n; i++)
    {
        int a = 1;   // 'a' starts from 1 in every row (starting odd number)

        // Inner loop: prints numbers in each row
        // j goes from 1 to i → so row number decides how many numbers to print
        for(int j = 1; j <= i; j++)
        {
            printf("%d ", a);  // Print the current odd number
            a = a + 2;         // Move to next odd number (odd numbers differ by +2)
        }

        printf("\n");          // After printing each row, move to next line
    }

    return 0;    
}