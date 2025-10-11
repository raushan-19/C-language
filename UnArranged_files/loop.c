#include <stdio.h>
int main()
{
    int a = 1;
    for (int i = 1; i <= 10; i++)
    {
        printf("%d  ", a);
        a = a + 1;
    }
    return 0;
}