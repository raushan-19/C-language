#include <stdio.h>
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d", &n);
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial = factorial * i;
    }
    printf("The factorial of given number is %d",factorial);
    return 0;
}