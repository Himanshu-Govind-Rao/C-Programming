#include<stdio.h>
int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        printf("Enter element of array%d ",i+1);
        scanf("%d",&arr[i]);
    }
    int prd=1;
    for(int i=0;i<4;i++){
        prd=prd*arr[i];
    }
    printf("The Product of elements is:-%d",prd);
    return 0;
}