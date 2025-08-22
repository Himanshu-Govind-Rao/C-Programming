#include<stdio.h>
int main(){
    float x;
    printf("Enter a number:- ");
    scanf("%f",& x);
    if(x>=0){
        printf("the absolute value is %f",x);
    }
    else{
        printf("the absolute value is %f",-x);
    }
    return 0;
}