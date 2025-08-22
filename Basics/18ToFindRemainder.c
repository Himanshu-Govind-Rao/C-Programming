#include<stdio.h>
int main(){
    int a,b;
    printf("Enter dividend and divisor\n");
    scanf("%d %d",&a,&b);
    // printf("dividend = %d divisor=%d" ,a ,b);
    // printf("\nThe quotient is :- \n");
    int q=a/b;
    // printf("%d",q);
    int r;
    r = a - b*q;
    printf("\nThe remainder is :- %d \n",r );
    return 0;
}

// #include<stdio.h>
// int main(){
//     int a,b,q;
//     printf("Enter dividend and divisor\n");
//     scanf("%d %d",&a,&b);
//     q = a%b; //modular operator
//     printf("the remaninder is %d", q);
//     return 0;
// }