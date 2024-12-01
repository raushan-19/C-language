#include <stdio.h>
int main()
{

    int arr[5]={2,4,3,6,2}; // 5 boxes has been created
    arr[4]=54;  //{2,4,3,6,54}
    arr[0]=97;  //{97,4,3,6,54}
    printf("%d",arr[0]);

    // float r[3]={7.5,9.5,6.3};
    // printf("%f",r[2]);

    // char h[3]={'a','b','c'};
    // printf("%c",h[2]);

    return 0;
}