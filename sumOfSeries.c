// WAP to print sum of series
//-1+2-3+4-5+6-7.....
#include <stdio.h>
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d", &n);
    // Odd number -> subtract
    // even number -> add
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            sum = sum + i;
        else
            sum = sum - i;
    }
    printf("the sum of the series up to %dth term is =%d", n, sum);
    return 0;
}