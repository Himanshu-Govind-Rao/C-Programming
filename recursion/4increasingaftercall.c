#include<stdio.h>
void increasing(int n){ //3 se 2,2 se 1 se 0,0 abb 0 wala call khatam phir print 1,2,3
    if(n==0) return;
        increasing(n-1);
        printf("%d\n",n);
    return;
}
int main(){
    int n;
    printf("Enter a number:- ");
    scanf("%d",&n);
    increasing(n);
    return 0;
} 