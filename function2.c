#include <stdio.h>
void Namaste();
void Banjour();
int main()
{
    printf("enter i for indian & f for french = ");
    char ch;
    scanf("%c", &ch);
    if (ch == 'i')
    {
        Namaste();
    }
    else
    {
        Banjour();
    }
    return 0;
}
void Namaste()
{
    printf("Namaste\n");
}
void Banjour()
{
    printf("Banjour\n");
}