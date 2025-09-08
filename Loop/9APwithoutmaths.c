#include<stdio.h>
int main(){
    int n;   //itni baar loop chalega
    printf("Enter nth term:-");
    scanf("%d",&n);
    // 4,7,10,13,16.......upto n number of terms
    // we are going to use extra variables
    int a=4;
    for(int i=1;i<=n;i++){  // number of term to be printed
        printf("%d ",a); 
        a=a+3;              //what number no. should be print
    }
    return 0;
}