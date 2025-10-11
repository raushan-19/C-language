// print the first 10  fibonacci number
#include <stdio.h>
int main()
{
    int n1 = 0, n2 = 1, nextterm, i;
    printf("the 1st 10 fibonacci numbers are : ");
    printf("\n%d\n%d\n", n1, n2);
    for (i = 3; i <= 10; i++)
    {
        nextterm = n1 + n2;
        printf("%d \n", nextterm);
        n1 = n2;
        n2 = nextterm;
    }
    return 0;
}