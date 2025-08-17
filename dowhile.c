#include<stdio.h>
int main(){
int i=10;
// while(i<10){
//     printf("rohit");  //it will not run bcz of not 
//     i++;              not fullfilling the condition
// }
do{
    printf("rohit");
    i++;              //it will run at least once
}while(i<10);
    return 0;
}