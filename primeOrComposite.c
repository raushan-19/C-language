#include <stdio.h>
int main()
{
    int n;
    printf("enter the number : ");
    scanf("%d", &n); 
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0) // i is the factor of n
        {
            printf("the no. is composite\n");
            break;
        }
        else
            printf("the no. is prime\n");
        break;
    }
    if(n==1)printf("neither prime nor composite");
    return 0;
}