//WAP to print sum of all the even digits of number
#include <stdio.h>
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d", &n);
    int sum = 0;
    int digit = 0;
    while (n != 0)
    {
        digit = n % 10;
        if (digit % 2 == 0)
            sum = sum + digit;
        n = n / 10;
    }
    printf("the sum of even digits=%d", sum);
     return 0;
}