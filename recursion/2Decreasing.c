#include<stdio.h>
void decreasing(int n){ //print 3 phir 2 k call phir 2 print 1 k call 1 print 0 k call , 0 call pe return phir jitna call sb return
    if(n==0) return;
        printf("%d\n",n);
        decreasing(n-1);
    return;
}
int main(){
    int n;
    printf("Enter a number:- ");
    scanf("%d",&n);
    decreasing(n);
    return 0;
} 