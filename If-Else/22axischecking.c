#include<stdio.h>
int main(){
    int x;
    printf("Enter the value of x:- ");
    scanf("%d",&x);
     int y;
    printf("Enter the value of y:- ");
    scanf("%d",&y);
    if(x==0 && y==0){
        printf("the points lies on origin");
    }
    else if(x==0){
        printf("the points lies on y-axis");
    } 
     else if(y==0){
        printf("the points lies on x-axis");
    }
    else{
        printf("the points not lies on axes");
    }
    return 0;
}