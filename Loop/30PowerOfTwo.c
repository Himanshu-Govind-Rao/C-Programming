#include<stdio.h>
int main(){
    int a=2;
    int b;
    printf("Enter Power: ");
    scanf("%d",&b);
    int p=1;
    for(int i=1;i<=b;i++){
        p=p*2;
        printf("%d ",p);
    }
    return 0;
}