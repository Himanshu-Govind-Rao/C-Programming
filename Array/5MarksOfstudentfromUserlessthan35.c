#include<stdio.h>
int main(){
    int marks[10];
    for(int i=0;i<10;i++){
        printf("Enter mark of student%d :- ",i+1);
        scanf("%d",&marks[i]);   
    }

    for(int i=0;i<10;i++){ 
        if(marks[i]<35)
        printf("%d ",i+1);
    }
    return 0;
}