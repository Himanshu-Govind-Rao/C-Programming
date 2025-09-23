#include<stdio.h>
int main(){
    int arr[8] = {1,2,3,4,5,6,7,8}; 
    int TotalPairs=0;
    int x=11;
    for(int i=0; i<8; i++){
        for(int j=i+1; j<8; j++){
            if(arr[i]+arr[j]==x){
                TotalPairs++;
                printf("(%d %d)\n",arr[i],arr[j]);
            }
        }  
    }
    printf("Total pairs are:%d",TotalPairs);
    return 0;
} 
