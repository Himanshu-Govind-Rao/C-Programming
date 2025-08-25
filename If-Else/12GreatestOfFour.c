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
    int d;
    printf("Enter d = ");
    scanf("%d",&d);
    if(a>b && a>c && a>d){
        printf("%d is the greatest",a);
    }
    if(b>a && b>c && b>d){
        printf("%d is the greatest",b);
    }
    if(c>a && c>b && c>d){
        printf("%d is the greatest",c);
    }
    if(d>a && d>b && d>c){
        printf("%d is the greatest",d);
    }
    return 0;
}