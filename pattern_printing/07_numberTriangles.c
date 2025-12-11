// print :- 1
//          1 2
//          1 2 3
//          1 2 3 4

#include<stdio.h>
int main () 
{
    int n;
    printf("enter your limit : ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)     // print the number of rows
    {
        // inner loop prints the number in each row
        // it prints the value of j in each row according to the increment
        for(int j = 1; j<= i; j++)
        {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}