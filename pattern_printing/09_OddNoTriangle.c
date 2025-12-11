// print :- 1
//          1 3
//          1 3 5
//          1 3 5 7

#include<stdio.h>
int main () 
{
    int n;
    printf("enter your limit : ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j<= i; j++)
        {
            if(j%2 != 0) 
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}