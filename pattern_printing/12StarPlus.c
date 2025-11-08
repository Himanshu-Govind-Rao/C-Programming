#include<stdio.h>
int main(){
    int n;
    printf("Enter a number of rows:- ");
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){     
        for(int j=1;j<=n;j++){
            int t=n/2+1;
            if(i==t || j==t)
            printf(" * ");
            else printf("   ");
        }
        printf("\n");    
    }
    return 0;
}