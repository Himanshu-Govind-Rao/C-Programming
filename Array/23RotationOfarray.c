 #include<stdio.h>    // not completed
void reverse(int arr[],int si,int ei){
    for(int i,j; i<j;i++,j--){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
    }
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int k=3;
    // Steps
    k=k%7;
    reverse(arr,0,6);
    reverse(arr,0,2);
    reverse(arr,3,6);
    for (int i=0; i<7;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}