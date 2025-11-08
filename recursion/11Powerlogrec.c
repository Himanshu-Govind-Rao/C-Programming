#include<stdio.h>
int powerlog(int n, int m){
    if(m==0) return 1;
    if(m==1) return n;
    int x = powerlog(n,m/2);
    if(m%2==0){
        return x * x;
    }
    else{
        return x * x * n;
    }
}
int main(){
    int n,m;
    printf("Enter base:- ");
    scanf("%d",&n);
    printf("Enter power:- ");
    scanf("%d",&m);
    int p = powerlog(n,m);
    printf("%d raised to the power %d is %d",n,m,p);
    return 0;
} 

