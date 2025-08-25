#include<stdio.h> 
int main(){
    int n;
    printf("Enter the number : ");
    scanf("%d",&n);
    if(n%5==0 && n%3==0){   // OR directly we use n%15==0
        printf("the number is divisible by 3 and 5");
    }
    else{
        printf("It is not divisible by 3 and 5");
    }
    return 0;
}