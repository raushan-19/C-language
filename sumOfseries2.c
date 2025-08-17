// WAP to print sum of series
//-1+2-3+4-5+6-7.....
#include <stdio.h>
int main() 
{
    int n;
    printf("enter the number ");
    scanf("%d", &n);
    int sum = 0;  
    if (n % 2 == 0)
        sum = -n / 2;
    else
        sum = -n / 2 + n;
    printf("sum of series=%d", sum);
    return 0;
}