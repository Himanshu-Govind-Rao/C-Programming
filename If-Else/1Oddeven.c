#include<stdio.h>
int main(){
    int n;  //dabba ban gaya
    printf("Enter a number :- ");   //output me aagayi
    scanf("%d",&n);   //dabbe me value daal di
    if(n%2==0){      //even condition
        printf("even number");
    }
    // if(n%2!=0){     //odd condition
    // printf("odd number");
    // }
    else{
        printf("odd number");
    }
    return 0;
}