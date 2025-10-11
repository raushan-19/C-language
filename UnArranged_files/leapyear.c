
#include <stdio.h>
int main()
{
    int x;
    printf("enter your year : ");
    scanf("%d", &x);
    if (x % 4 == 0)
    {
        printf(" this is leap year ");
    }
    else
    {
        printf("this is not leap year");
    }
    return 0;
}