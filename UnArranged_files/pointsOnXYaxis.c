//check if  given point lies on x axis, y axis or at 0,0
#include<stdio.h>
int main() {
int x, y;
printf(" enter the coordinates = ");
scanf("%d %d",&x,&y);
if (x==0 && y==0) {
printf("It lies on origin");
}
if(x==0) {
printf("It lies on Y-axis");
}
else if(y==0) {
printf("It lies on X-axis");
}
else
{
    printf("It lies on graph ");
}
return 0;
}