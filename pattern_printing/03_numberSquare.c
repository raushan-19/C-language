// Print :- 1234
//          1234
//          1234
//          1234

#include <stdio.h>
int main()
{
    int n;
    printf("Enter your number : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) // Printing number of rows.
    {
        for (int j = 1; j <= n; j++) // Printing the value of j in each rows.
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}