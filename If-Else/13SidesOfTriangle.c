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
    if(a<(b+c) && b<(a+c) && c<(a+b)){
        printf("%d %d %d are the sides of triangle",a,b,c);
    }
    else{
        printf("%d %d %d are not the sides of triangle",a,b,c);
    }
    return 0;
}