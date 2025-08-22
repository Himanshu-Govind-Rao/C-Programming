#include<stdio.h>
int main(){
    int x;
    printf("Enter a year :- ");
    scanf("%d",&x);
    if(x%4==0){
        printf("The given year is leap year");
    }
    else{
        printf("Not a leap year");  
    }
    return 0;
}