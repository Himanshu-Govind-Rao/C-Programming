#include<stdio.h> //nahi samajh aaya.....
int main(){
    int n;
    printf("Enter the number:-");
    scanf("%d",&n);
    int sum=0;
    int EvenDigit = 0;
    while(n!=0){ 
        if (n%2==0);
        EvenDigit=n%2;
        sum=sum + EvenDigit;
        n=n/10;
    }
     printf("the sum of Evendigits are %d:-",sum);
    return 0;
}