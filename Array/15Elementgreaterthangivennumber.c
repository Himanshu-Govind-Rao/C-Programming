#include<stdio.h>
int main(){
    int arr[5] = {1,2,3,4,5};
    int x=3,count=0;
    for(int i=0; i<5; i++){
        if(x<arr[i])
        count++;
    }
    printf("%d numbers are greater then 3",count);
    return 0;
}