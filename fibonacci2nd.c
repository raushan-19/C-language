// print the first 'n' fibonacci number
#include <stdio.h>
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d", &n);
    int a = 1;
    int b = 1;
    int sum = 1;
    for (int i = 1; i <= n-2 ; i++)
    {       
        sum = b + a;
        a = b;
        b = sum; 
        printf("The %dth fibonacci term is %d", i, sum);  
    }    
    return 0;
}