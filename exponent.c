//Two numbers are enterd through the keyboard. 
//Write a program to find the value of one number raised to the power of another.
#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the first number ");
    scanf("%d", &a);
    printf("enter the second number ");
    scanf("%d", &b);
    int power = 1;
    for (int i = 1; i <= b; i++)
    {
        power = power * a;
    }
    printf("value of %d to the power %d is %d", a, b, power);
    return 0;
}