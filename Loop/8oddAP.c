#include<stdio.h>
int main(){
    int n;
    printf("Enter nth term:-");
    scanf("%d",&n);
    for(int i=1;i<=2*n-1;i=i+2){
    // for(int i=4;i<=3*n+1;i=i+3){  //AP-4,7,10......n
        printf("%d ",i);
    }
    return 0;
}