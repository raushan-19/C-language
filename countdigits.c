#include <stdio.h>
int main()
{
    int n;
    printf("enter ther number  : ");
    scanf("%d", &n);
    int count = 0;
    while (n != 0)
    {
        n = n / 10;  //if a nuber is divided by 10 it will reduce its last digits
                                  //example:24366/10=2436
        count++;
    }
    printf("the number of digits are %d", count);
    return 0;
}