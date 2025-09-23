// #include<stdio.h>
// int main(){
//     int arr[7]={1,3,5,19,34,54,6};
//     int max=arr[0];  //pahale ko bada number assume krr lo
//     for(int i=0;i<7;i++){
//         if(max<arr[i]){
//         max=arr[i];
//         }
//     }
//     printf("The greatest element is %d",max);
//     return 0;
// }

// SECOND METHOD.....
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={1,3,5,19,34,54,6};
    int max = INT_MIN;  //Sabse chhota number INT datatype me
    for(int i=0;i<7;i++){
        if (max<arr[i]){
            max=arr[i];
        }
    }
    printf("The greatest element is %d",max);
    return 0;
}