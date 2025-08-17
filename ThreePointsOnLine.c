#include <stdio.h>
int main()
{
    double x1, x2, x3, y1, y2, y3;
    printf("enter 1st coordinates : ");
    scanf("%d%d", &x1, &y1);
    printf("enter 2nd coordinates : ");
    scanf("%d%d", &x2, &y2);
    printf("enter 3rd coordinates : ");
    scanf("%d%d", &x3, &y3);
    double m1 = (x2 - x1) / (y2 - y1);
    double m2 = (x3 - x2) / (y3 - y2);
    if (m1 == m2)
    {
        printf("all points lies on straight line");
    }
    else
    {
        printf("all points does not lies on straight line");
    }
    return 0;
}