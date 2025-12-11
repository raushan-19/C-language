// print :- A B C D 
//          A B C D 
//          A B C D 
//          A B C D 
         
#include<stdio.h>
int main (){
    int n ;
    printf("Enter no. of rows : ");
    scanf("%d",&n);
    for(int i = 1 ; i <= n ; i++){  // print no. of rows
        int a = 1;
        for(int j = 1 ;  j <= n ; j++ ){
            // inner loop : taking a new variable d in which we stores the value a + 64 (bcz ascii value of A is 65)
            int d = a + 64 ;
            // with use of typecasting we can print A whose ascii value is stored in d 
            char ch = (char)d;
            printf("%c ",ch);
            a++;    // doing increment of a bcz we need more ascii characters
        }
        printf("\n");
    }
    return 0;
}