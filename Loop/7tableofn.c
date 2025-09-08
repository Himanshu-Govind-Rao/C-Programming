#include<stdio.h>
int main(){
    int n;
    printf("Enter the number whose table you want:-");
    scanf("%d",&n);
    for(int i=n;i<=n*10;i++){
        if(i%n==0)
        printf("%d ",i);
    }
    return 0;
}