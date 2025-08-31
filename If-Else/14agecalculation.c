#include<stdio.h>
int main(){
    int ram,shyam,ajay;
    printf("Enter the age of ram:- ");
    scanf("%d",&ram);
    printf("Enter the age of shyam:- ");
    scanf("%d",&shyam);
    printf("Enter the age of ajay:- ");
    scanf("%d",&ajay);
    if(ram<ajay && ram<shyam){
        printf("ram is youngest");
    }
    if(shyam<ajay && ram>shyam){
        printf("shyam is youngest");
    }
    if(ram>ajay && ajay<shyam){
        printf("ajay is youngest");
    }
    else{
        printf("all are of same age");
    }
    return 0;
}