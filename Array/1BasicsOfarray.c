#include<stdio.h>
int main(){
    int arr [5] = {2,4,6,8,1};
    arr[4]=100;  //{2,4,6,8,100}
    arr[1]=1;  //{2,1,6,8,100}
    printf("%d",arr[1]); 
    // float a[3] = {1.2,3.3,4.5,7.2};
    // printf("%f",a[0]);
    // char arr[3]={'a','b','%','Y'};
    // printf("%c",arr[3]);
    return 0;
}
