#include <stdio.h>
int main(){
    int x;
    printf("Enter:");
    scanf("%d",&x);
    if(x>0){
        printf("Number is positive.");
        return 0;
    }
    else if(x==0){
        printf("Number is zero");
        return 0;
    }
    printf("Number is negative.");
    return 0;
}
