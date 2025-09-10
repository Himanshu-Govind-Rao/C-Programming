#include<stdio.h>    
int main(){
    int n;
    printf("Enter the number:-");
    scanf("%d",&n);
    int product = 1;
    int lastDigit = 0;
    while(n!=0){
        lastDigit=n%10;
        product = product  * lastDigit;
        n=n/10;
    }
     printf("the Product of digits are :- %d",product);
    return 0;
}