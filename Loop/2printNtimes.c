#include<stdio.h>
int main(){
    int n; 
    printf("Enter the value of n:-");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+1){  //i=i+2 then increment of two successiviely
        printf("Hello World\n");
    }
    return 0;
}