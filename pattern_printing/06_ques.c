// print :- *****
//          ****
//          ***
//          **
//          *

// another way of solving this program

#include <stdio.h>
int main()
{
    int n;
    printf("Enter your limit : ");
    scanf("%d", &n);
    int a = n;
    for (int i = 1; i <= n; i++) // print number of lines
    {
        for (int j = 1; j <= a; j++) // it print stars from 1st line { star will be decrease in each line as per the no. of line will increase }
        {
            printf("*");
        }
        a--; // decreasing the value of "a" after each increment of no. of line
        printf("\n");
    }
    return 0;
}