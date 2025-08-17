// take two integers input a and b :a>b and find the remainder when a is divided by b.
#include <stdio.h>
int main()
{
    int a, b;
    printf("enter dividend :");
    scanf("%default", &a);
    printf("enter divisor :");
    scanf("%d", &b);
    int q = a / b;
    int r = a - b * q;
    printf("when %d is diveded by %d \n the remainder is %d", a, b, r);

    return 0;
}