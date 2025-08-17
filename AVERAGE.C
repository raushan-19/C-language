#include <stdio.h>
int main()
{
    float a, b, c, d, e, avg;
    printf("a, b, c, d, e");
    scanf("%f%f%f%f%f", &a, &b, &c, &d, &e);
    avg = (a + b + c + d + e) / 5;
    printf("average of 5 numbers = %f", avg);
    return 0;
}