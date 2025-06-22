

/*  Using third variable 
int main(){
    int x,y;
    printf("Enter value of x:");
    scanf("%d",&x);
    printf("Enter value of y:");
    scanf("%d",&y);

    int temp = x;
    x = y;
    y = temp;
    printf("Value of x now is:%d\n",x);
    printf("Value of y now is:%d\n",y);
    return 0;
}
*/
#include <stdio.h>
int main(){
    float x,y;
    printf("Enter value of x:");
    scanf("%f",&x);
    printf("Enter value of y:");
    scanf("%f",&y);
    //x=20,y=10
    x = (x+y)/2;  //now x=15,y=10
    y = x+(x-y);   // x=15,y=20
    x = x+(x-y);    // y=20,x=10
    printf("Value of x now is:%.0f\n",x);
    printf("Value of y now is:%.0f\n",y);
    return 0; 
}