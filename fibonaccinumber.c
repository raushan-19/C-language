// print the nth fibonacci number
// 1 1 2 3 5 8 13 34 .....
#include <stdio.h>
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d", &n);
    int a = 1;
    int b = 1;
    int sum = 1;
    for (int i = 1; i <= n - 2; i++)
    {
        sum = b + a;
        a = b;
        b = sum;
    }
    printf("The %dth fibonacci term is %d",n, sum);
    return 0;
}