// print :- A
//          A B
//          A B C
//          A B C D

#include <stdio.h>
int main()
{
    int n;
    printf("Enter no. of rows : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)    // print no. of rows
    {
        int a = 65;     // taking variable "a" = 65 bcz ascii value of "A" is 65 & "B" is 66 & "C" is 67 and so on...
        for (int j = 1; j <= i; j++)
        {
            // inner loop : with use of typecasting we print "A" whose ascii value is stored in "a".
            char ch = (char)a;
            printf("%c ", ch);
            a++;    // doing the increment of "a" so that we can take the values of "B","C","D",....
        }
        printf("\n");
    }
    return 0;
}