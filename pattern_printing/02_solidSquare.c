// Print square by taking user input.

#include <stdio.h>
int main()
{
    int n, i, j;
    printf("Enter size : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)    // it will print the number of rows.
    {
        for (j = 1; j <= n; j++)    // it will print the number of columns.
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}