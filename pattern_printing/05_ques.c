// print :- *****
//          ****
//          ***
//          **
//          *

#include <stdio.h>
int main()
{
    int n;
    printf("Enter your limit : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)        // print number of lines
    {
        for (int j = 1; j <= n + 1 - i; j++)     // it print stars from 1st line { star will be decrease in each line as per the no. of line will increase }
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}