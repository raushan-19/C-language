/*Write a program to print all the ascii values and
their equivalent characters of 26 alphabets (CAPITAL) using a while loop*/
#include <stdio.h>
int main()
{
    // This can be done through type casting0
    for (int i = 65; i <= 90; i++)
    {
        char ch = (char)i;
        printf("%c - ", ch);
        printf("%d\n", i);
    }
    return 0;
}
