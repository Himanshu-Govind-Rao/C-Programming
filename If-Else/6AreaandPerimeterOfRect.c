#include<stdio.h>
int main(){
    int l,b;
    printf("Enter length:- ");
    scanf("%d",&l);
    printf("Enter breadth:- ");
    scanf("%d",&b);
    int a=l*b;
    int p=2*(l+b);
    if(a>p){
        printf("area is greater than primeter");
    }
    if(a<p){
        printf("area is less than primeter");
    }
    if(a==p){
        printf("area is equal to perimeter");
    }
    return 0;
} 