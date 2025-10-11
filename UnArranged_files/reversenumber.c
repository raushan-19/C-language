#include <stdio.h>
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n);
    int r = 0;
    int lastdigit = 0;
    while (n != 0)
    {
         r = r * 10;
        lastdigit = n % 10;
        r = r + lastdigit;
        n = n / 10;
    }
    printf("the reverse =%d", r);
    return 0;
}