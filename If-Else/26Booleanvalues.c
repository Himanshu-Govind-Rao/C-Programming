#include<stdio.h>
int main(){
     int x=3,y,z;
    // z=x<10;  //true
     y=x=10; 
     z=x<10;   //false     technically boolean
     printf("\n x=%d y=%d z=%d",x,y,z);
    return 0;
}
    