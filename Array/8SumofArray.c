#include<stdio.h>
int main(){
    int arr[4]={2,3,5,8};
    int sum=0;
    for(int i=0;i<4;i++){
        sum=sum+arr[i];
    }
    printf("The sum of element is:-%d",sum);
    return 0;
}