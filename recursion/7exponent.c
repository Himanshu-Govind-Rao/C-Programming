#include<stdio.h>
int power(int n, int m){
    if(m==0) return 1;
    int recAns =  n*power(n,m-1);
    return recAns;
}
int main(){
    int n,m;
    printf("Enter base:- ");
    scanf("%d",&n);
    printf("Enter power:- ");
    scanf("%d",&m);
    int p = power(n,m);
    printf("%d raised to the power %d is %d",n,m,p);
    return 0;
} 

