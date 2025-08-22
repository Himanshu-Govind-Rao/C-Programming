#include<stdio.h>
int main(){
    int a,b;//a>b
    printf("Enter the dividend :");
    scanf("%d",&a);
    printf("Enter the divisor :");
    scanf("%d",&b);
    int r=a%b;
    printf("The remainder is:- %d",r);
    return 0;
}