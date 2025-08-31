#include<stdio.h>
int main(){
    int n;
    printf("Enter percentage: ");
    scanf("%d",& n);
    if(n>=90){
        printf("A grade");
    }
    else if(n>=80){
        printf("B grade");
    }
    else if(n>=70){
        printf("C grade");
    }
    else if(n>=60){
        printf("D grade");
    }
    else if(n>=50){
        printf("E grade");
    }
    else{
        printf("Fail");
    }
    return 0;
}