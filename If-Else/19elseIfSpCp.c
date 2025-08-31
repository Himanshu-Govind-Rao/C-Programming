#include<stdio.h>
int main(){
    int cp;
    printf("Enter the value of cp:-",cp);
    scanf("%d",&cp);
    int sp;
    printf("Enter the value of sp:-",sp);
    scanf("%d",&sp);
    if(sp>cp){
        printf("Profit");
    }
    else if(cp>sp){
        printf("Loss");
    }
    else{
        printf("No profit,No loss");
    }
    return 0;
}