#include<stdio.h>     //not completed.......
int main(){
    int arr[5] = {1,2,3,2,1};
    int brr[5];

    for(int i=0; i<5; i++){
       if (brr[i]!=arr[4-i]){
        break;
        printf("Not a palindrime");
    }
        else printf("it is palindrome");
    }
    return 0;
}

