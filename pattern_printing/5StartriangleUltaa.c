#include<stdio.h>
int main(){
    int n;
    printf("Enter a number of rows:- ");
    scanf("%d",&n);
    int a=n;
    for(int i=1;i<=n;i++){ 
        for(int j=1;j<=a;j++) { 
        // for(int j=(n+1)-i;j>=1;j--){ 
        // for(int j=1;j<=(n+1)-i;j++){ 
        printf(" * ");
        }
        a--;
        printf("\n");    
    }
    return 0;
}