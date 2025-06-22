#include <stdio.h>
int main(){
    int x,y;
    printf("Enter 1st number:");
    scanf("%d",&x);
    printf("Enter 2nd number:");
    scanf("%d",&y);

    if(x==y){
        printf("They are equal!\n");
        return 0;
    }
    printf("They are not equal!");
    return 0;
}
