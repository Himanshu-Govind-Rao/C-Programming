// #include<stdio.h>
// int main(){
//     int arr[7]={8,3,5,19,34,54,6};
//     int min=arr[0];  //pahale ko chhota number assume krr lo
//     for(int i=0;i<7;i++){
//         if(min>arr[i]){
//         min=arr[i];
//         }
//     }
//     printf("The smallest element is %d",min);
//     return 0;
// }

// SECOND METHOD.....
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={8,3,5,19,34,54,6};
    int min = INT_MAX;  //Sabse bada number INT datatype me
    for(int i=0;i<7;i++){
        if (min>arr[i]){
            min=arr[i];
        }
    }
    printf("The smallest element is %d",min);
    return 0;
}