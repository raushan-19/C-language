//WAP to calculate the cost of painting of a room having 3 walls where the length & breadth of 
//second wall is bigger than first by 2 unit and the third wall is equal to first.painting cost= rs 5/m2.
#include <stdio.h>
int main()
{
    int l, b;
    printf("enter length : ");
    scanf("%d", &l);
    printf("enter breadth : ");
    scanf("%d", &b);
     int a = l * b;
    int c = (l + 2) * (b + 2);
    int r = 5 * c;
    printf("the cost painting=Rs %d", r);
    return 0;
}