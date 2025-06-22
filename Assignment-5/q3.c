#include <stdio.h>
int main(){
    int x,y,result=1;
    printf("Enter value of base:");
    scanf("%d",&x);
    printf("Enter value of exponent:");
    scanf("%d",&y);

    for(int i=1;i<=y;i++){
        result *= x;
    }
    printf("%d raised to %d is = %d",x,y,result);
    return 0;
}
