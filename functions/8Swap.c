// SWAP TWO VALUES USING THIRD VARIABLE....
// #include<stdio.h>
// int main(){
//     int n,m;
//     printf("Enter n : ");
//     scanf("%d",&n);
//     printf("Enter m : ");
//     scanf("%d",&m);
//     int temp;
//     temp=n;
//     n=m;
//     m=temp;
//     printf("The value of n is %d \n",n);
//     printf("The value of m is %d",m);
//     return 0;
// }


// SWAP TWO VALUES WITHOUT USING THIRD VARIABLE....
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    a = a * b;
    b = a / b;
    a = a / b;
    printf("The value of a is %d \n",a);
    printf("The value of b is %d",b);
    return 0;
}
