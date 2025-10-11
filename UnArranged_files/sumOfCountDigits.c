#include <stdio.h>
int main()
{
    int n; 
    printf("enter the number : ");
    scanf("%d", & n);
    int sum = 0;
    int lastDigit=0;
    while (n != 0)
    {
        lastDigit = n % 10;     //if a number has modulus by 10
                               //then the remainder will be the last digit of the number
                               //example:54653%10=3 
        sum = sum + lastDigit;
        n = n / 10;             //if a nuber is divided by 10 it will reduce its last digits
                               //example:24366/10=2436
    }
    printf("the sum of digits are : %d", sum);
    return 0;
}