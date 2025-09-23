// #include<stdio.h>     ##CONFUSION
// #include<limits.h>
// int main(){
//     int arr[7]={1,3,5,19,34,54,6};
//     int max = INT_MIN;
//     int smax = INT_MIN; 
//     for(int i=0;i<7;i++){
//         if (max<arr[i]){
//             max=arr[i];
//         }
//     } 
//     for(int i=0;i<7;i++){
//         if (arr[i]!=max && smax<arr[i]){
//             smax=arr[i];
//         }
//     } 
//     printf("Second largest value is:- %d",smax);
//     return 0;
// } 

//Second method using only one loop
#include<stdio.h>
#include<limits.h>
int main(){
    int arr[7]={7,2,4,4,3,6,1};
    int max = INT_MIN;
    int smax = INT_MIN; 
    for(int i=0;i<7;i++){
        if (max<arr[i]){
            smax = max;  // smax is now previous max
            max=arr[i];  // max is now a new max
        }
       else if(smax<arr[i] && max!=arr[i]){   // max > arr[i]
        smax = arr[i];
       }
    } 
    printf("Second largest value is:- %d",smax);
    return 0;
}