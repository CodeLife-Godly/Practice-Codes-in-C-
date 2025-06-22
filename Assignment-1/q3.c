#include <stdio.h>
int main(){
    float x,y;
    printf("Enter first number:");
    scanf("%f",&x);
    printf("Enter second number:");
    scanf("%f",&y);

    printf("Sum of %.2ff and %.2f is: %.2f\n",x,y,x+y);
    printf("Difference of %.2f and %.2f is: %.2f\n",x,y,x-y);
    printf("Multiply of %.2f and %.2f is: %.2f\n",x,y,x*y);
    printf("Division of %.2f and %.2f is: %.2f\n",x,y,x/y);

    return 0;
}