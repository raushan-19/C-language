// printing a rectangle with stars.

#include <stdio.h>
int main()
{
    int n, m;
    printf("Enter breadth : ");
    scanf("%d", &n);
    printf("\nEnter length : ");
    scanf("%d", &m);
    for (int i = 1; i <= n; i++)
    { // created a loop which will do its work for n times.   {number of lines}
        for (int i = 1; i <= m; i++)
        {                // // created a loop which will do its work for m times.    {number of stars in each line}
            printf("*"); // it will print "*".
        }
        printf("\n"); // it will change the line after every iteration.
    }
    return 0;
}