#include<stdio.h>
int main(){
    int n;
    printf("Enter n:-");
    scanf("%d",&n);
    int y = n;
    int r=0;
    while(n!=0){
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
    printf("The reversed number is %d\n",r);
    int sum = r+y;    //hume n ko dusre variable me store krnaa padega 
                     // kyoki loop ke bahar n ki value 0 ho jayegi
    printf("The sum of the digits are:-%d", sum);
    return 0;
}