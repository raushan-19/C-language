#include <stdio.h>
int main()
{
    int x, y, z;
    printf("enter x :");
    scanf("%d", &x);
    printf("\nenter y :");
    scanf("%d", &y);
    printf("\nenter  z:");
    scanf("%d", &z);
    if (x > y && x > z)
    {
        printf("x is greater ");
    }
    if (y > x && y > z)
    {
        printf("y is greater ");
    }
    if (z > x && z > y)
    {
        printf(" z is greater ");
    }
    return 0;
}