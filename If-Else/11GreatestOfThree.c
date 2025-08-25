#include<stdio.h>
int main(){
    int a;
    printf("Enter a = ");
    scanf("%d",&a);
    int b;
    printf("Enter b = ");
    scanf("%d",&b);
    int c;
    printf("Enter c = ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("%d is the greatest",a);
    }
    if(b>a && b>c){
        printf("%d is the greatest",b);
    }
    if(c>a && c>b){
        printf("%d is the greatest",c);
    }
    return 0;
}