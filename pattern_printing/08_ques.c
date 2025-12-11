// print :- 1 2 3 4
//          1 2 3
//          1 2
//          1

#include<stdio.h>
int main (){
    int n;
    printf("Enter your limit : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)        // print number of rows
    {
        // inner loop prints number in each row
        // j goes from 1 to (n+1-i)=4 in 1st line.
        // j goes from 1 to (n+1-i)=3 in 2nd line.        
        // j goes from 1 to (n+1-i)=2 in 3rd line.        
        // j goes from 1 to (n+1-i)=1 in 4th line.        
        for (int j = 1; j <= n + 1 - i; j++)     
        {
            printf("%d",j); // prints the value of "j" in every row according to the limit
        }
        printf("\n");   // change the line after every loop
    }
    return 0;
}