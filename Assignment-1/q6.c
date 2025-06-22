#include <stdio.h>
#include <stdlib.h>
int main(){
    int x,y;
    printf("Enter:");
    scanf("%d",&x);
    printf("Enter:");
    scanf("%d",&y);

    int result = (abs(x-y)+abs(x+y))/2;
    printf("Maximum of %d and %d is:%d",x,y,result);
    return 0;
}
