#include <stdio.h>
int main()
{
    int rows, columns;
    printf("enter the number of rows : ");
    scanf("%d", &rows);
    printf("enter the number of columns : ");
    scanf("%d", &columns);
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)  //Always use different variables in loops
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}