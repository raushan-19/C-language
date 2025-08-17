#include <stdio.h>
int main()
{
 int rows,columns ;
 printf("enter a rows");
 scanf("%d",&rows);
 printf("enter a columns");
 scanf("%d",&columns);
 for(int i=1;i<=rows;i++)
 {
    for(int i=1;i<=columns;i++){
        printf("*");
    }
    printf("\n");
 }   
    return 0;
}