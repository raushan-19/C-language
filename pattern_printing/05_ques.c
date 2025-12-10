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
        for (int j = 1; j <= n + 1 - i; j++)    //  
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}