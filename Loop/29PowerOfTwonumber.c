#include<stdio.h>
int main(){
    int a,b;
    printf("Enter Base value: ");
    scanf("%d",&a);
    printf("Enter Power value: ");
    scanf("%d",&b);
    int p=1;
    for(int i=1;i<=b;i++){
        p=p*a;
    }
    printf("%d raised to the power %d is equal to %d",a,b,p);
    return 0;
}