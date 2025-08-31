#include<stdio.h>
int main(){
    int a , b, c;
    printf("Enter a = ");
    scanf("%d",&a);
    printf("Enter b = ");
    scanf("%d",&b);
    printf("Enter c = ");
    scanf("%d",&c);
    if(a>b){ //b is out of the race
        if(a>c)
        printf("%d is the greatest",a);
    else    //a<c  -> b<a<c
        printf("%d is the greatest",c);
    }
    else{  //b>a -> a ab sabse bada toh nahi hai
        if(b>c)
        printf("%d is greatest",b);
        else //c>b  -> a<b<c
        printf("%d is the greatest",c);
    }
    return 0;
}