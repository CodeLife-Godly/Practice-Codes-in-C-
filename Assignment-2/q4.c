#include <stdio.h>
int main(){
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    if(x%2 == 0){
        printf("Number is even.\n");
    }
    else{
        printf("Number is odd.\n");
    }
    return 0;
}
