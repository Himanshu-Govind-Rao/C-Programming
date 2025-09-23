#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int sum1=0 ,sum2=0;
    for(int i=0; i<5; i++){ 
        if(i%2==0)
        sum1+=arr[i];
        else sum2+=arr[i];
    }
   int D=sum1-sum2;
   printf("Difference is:%d ",D);
    return 0;
} 
